# include <iostream>
using namespace std;
int swap(int& m, int& n){
    int temp = m;
    m=n;
    n=temp;
}
int bubbleSort(int arr[],int n){
    // if array is already sorted or became completely sort after a specific step 
    // then we use this bool function to prevent our code from further compilation and just return the sorted array
    bool swapped = false;
    for(int k=0;k<n;k++){
        for(int j=0;j<n-k;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
               swapped = true; 
            }
             }
              if(swapped == false ){
                break;
        } 
    }
}
int main ()
{
    int n, arr[15];
    cout<<"Enter the size of an array ";
    cin>>n;
    cout<<"Enter the values ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    bubbleSort(arr,n);
    cout<<"After sorting values are ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}