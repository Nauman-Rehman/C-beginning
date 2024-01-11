# include <iostream>
using namespace std;
int swap(int& m, int& n){
    int temp = m;
    m=n;
    n=temp;
}
int sorting(int arr[], int n){
    int i;
    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
       swap(arr[minIndex],arr[i]) ;
    }
    
}
int main ()
{
    int n;
    int arr[15];
    cout<<"Enter the size of an array ";
    cin>>n;
    cout<<"Enter the values ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After sort ";
    sorting(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}
