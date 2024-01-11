// Ques 1. Reverse an array

// // Method 1.
// # include <iostream>
// using namespace std;
// int main ()
// {
//     int k, n,i,arr[15];
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"After which index you want to reverse this array ";
//     cin>>k;
//     while(i>k){
//         cout<<arr[i]<<" ";
//         i--;
//     }
//  return 0;
// }

// // Method 2.
// # include <iostream>
// # include <vector>
// using namespace std;
// int main ()
// {
//     vector<int> v;
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(4);
//     v.push_back(8);
//     v.push_back(2);
//     v.push_back(8);
//     v.push_back(0);
//     v.push_back(1);

//  return 0;
// }

// Ques 2. Merging of two arrays and make new array
// # include <iostream>
// using namespace std;
// int merge(int a1[],int a2[],int m,int n,int a3[]){
//      a3[m+n];
//     int i=0,j=0;
//     for(int k=0;k<m+n;k++){
//         if(a1[i]<a2[j]){
//             a3[k]=a1[i];
//             i++;
//         }
//         else{a3[k]=a2[j];
//         j++;}
//     }
// }
// int main ()
// {
//     int a1[]= {1,3,5,7,9};
//     int a2[]= {2,3,4,6,10,12,15};
//     int a3[15];
//     merge(a1,a2,5,7,a3);
//     for(int i=0;i<12;i++){
//         cout<<a3[i]<<" ";
//     }
//  return 0;
// }

// // merging two arrays without making any new array
// # include <iostream>
// # include <vector>
// using namespace std;
// int merge(int a1[],int a2[],int m,int n){
//     a1[m+n+1];
//     int i=0,j=0,temp;
//     for(int k=0;k<m+n;k++){
//         if(a1[i]<a2[j]){
//             i++;
//         }
//         else{
            
//             for(int i=m+n;i>=m+n-i-1;i--){
//             a1[i+1]=a1[i];
//         }
        
//             a1[i]=a2[j];
//         j++;}
//     }
// }
// int main ()
// {
//     vector<int> a1= {1,3,5,7,9};
//     int a2[]= {2,3,4,6,10,12,15};
//     merge(a1,a2,5,7);
//     for(int i=0;i<12;i++){
//         cout<<a1[i]<<" ";
//     }
//  return 0;
// }// nhi hua

// sort an array so that all zeros of that array goes at last and values comes first in same order
# include <iostream>
using namespace std;
int sort(int arr[],int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }}
        while (j!=n){
            arr[j]=0;
            j++;
        }
    
}
int main ()
{
    int arr[10]={0,4,4,0,6121,0,67,4,0,12};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"After sorting "<<endl;
    sort(arr,10);
     for(int i=0;i<10;i++){
            cout<<arr[i]<<" ";}
 return 0;
}