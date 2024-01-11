# include <iostream>
using namespace std;

bool isSorted(int *arr, int n){
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else { bool remainingPart = isSorted(arr+1, n-1);
            return remainingPart;}

}

int getSum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
     int remain = getSum(arr+1,n-1);
     int sum = arr[0] + remain;
    return sum;
}

int findKey(int arr[], int n, int key, int count =0){
    
    if(arr[0]==key){
        return count;
    }
    if(n<=0){
        return -1;
    }
    else{count++;
    findKey(arr+1,n-1,key,count); // by sending arr+1 array start from index 1 step ahead and ofcourse this result in size = size - 1
    }
    
}

int binSearch(int arr[], int key, int s, int e){ // not work for 6,7 in the given array
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(key == arr[mid]){
        return mid;
    }
    if(key > arr[mid]){
        binSearch(arr, key, mid+1, e);
    }
    if(key < arr[mid]){
        
        binSearch(arr, key, s, mid-1);
    }
}

int main ()
{
    int arr[7];
    cout<<"Enter the values of array ";
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<isSorted(arr,7);
    cout<<endl<<"The sum of the array is "<<getSum(arr,7);
    int key;
    cout<<endl<<"Enter the number you want to find out in the array ";
    cin>>key;
    // if(findKey(arr, 7, key) == -1){
    //    cout<<"The number is not available in the array";
    // }
    // else { cout<<"Number is at index "<<findKey(arr,7,key);}
    cout<<endl;
     if( binSearch(arr, key, 0, 6) == -1){
       cout<<"The number is not available in the array";
    }
    else { cout<<"Number is at index "<< binSearch(arr, key, 0, 6);}

 return 0;
}
