# include <iostream>
using namespace std;

int mergeJoint(int arr[], int s, int e){
    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int* first = new int[len1];
    int* second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

     mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{arr[mainArrayIndex++] = second[index2++];}
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
     while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeBreak(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    mergeBreak(arr,s,mid);
    mergeBreak(arr,mid+1,e);

    mergeJoint(arr,s,e);
}

int main ()
{
    int n;
    cout<<"Enter the size of your array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeBreak(arr,0,n-1);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
 return 0;
}

