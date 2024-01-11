// // insertion sort method
// // mera tarika
// # include <iostream>
// using namespace std;
// int swap(int arr[],int prr[],int i, int j){
//     int temp = arr[i];
//     for(i=i;i>j;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[j] = temp;
    
// }

// int insertionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             if(arr[i]<arr[j]){
//             swap(arr,arr,i,j);
//         }}
        
//     }
// }
// int main ()
// {
//     int n, arr[15];
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"After sort ";
//     insertionSort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//  return 0;
// }

# include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0;j--){
            if(arr[j]>temp){
                // shift
                arr[j+1] = arr[j];
            }
            else {// ruk jao
            break;}
        }
        arr[j+1] = temp;
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
    cout<<"After sort ";
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}