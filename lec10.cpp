// #include <iostream>
// using namespace std;
// // Ques --> there are n numbers in the form of 2m+1 in which m number comes 2 times and there is one unique number ,
// // find that unique one

//  int findUnique (){

//      int b[7];
//     b[0]=3;
//     b[1]=1;
//     b[2]=3;
//     b[3]=7;
//     b[4]=1;
//     b[5]=8;
//     b[6]=8;
//     b[7]=7;
//     b[8]=0;

//         int ans = 0;
//         for(int i=0; i< 9; i++){
//             ans=ans^b[i];
//         }
//         return ans;
//     };

// int main(){
//     // int a[6];
//     // a[0]=3;
//     // a[1]=1;
//     // a[2]=2;
//     // a[3]=7;
//     // a[4]=11;
//     // a[5]=8;
//     // for (int i=0;i<6;i = i+2){
//     //     swap(a[i], a[i+1]);
//     //     cout<<a[i]<<" "<<a[i+1]<<" ";
//     // }
// // int b[7];
// //     b[0]=3;
// //     b[1]=1;
// //     b[2]=3;
// //     b[3]=7;
// //     b[4]=1;
// //     b[5]=8;
// //     b[6]=8;
// //     for(int i=0;i<7;i++){
// //         for(int j=i+1;j<7;j++){
// //            if(b[i]=b[j]){
// //             break;
// //            }
// //            else if(b[i]!=b[j]){
// //                 continue;}
        
// //         }cout<<b[i];
// //     }
//    cout<<findUnique();
//     return 0;
// }


// // swaping alternate values of an array
// # include <iostream>
// using namespace std;

// int swap(int arr[], int prr[]){
//     int i, temp;
//     temp = arr[i];
//     arr[i]=prr[i];
//     prr[i]=temp;
// }
// int main ()
// {
//     int i, n;
//     int arr[10];
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i=(i+2)){
//          if(i<(n-1)){
//         swap(arr[i],arr[i+1]);
//         cout<<arr[i]<<" "<<arr[i+1]<<" ";}
//         else{cout<<arr[i];}

//     }
//  return 0;
// }


// finding a unique number from an array which comes only one time unlike others which comes twice
// we find out this by the help of ^(XOR) operator 
// when we xor x with 0 it gives x
// when we xor x with x it gives 0
// but it would not works when a number comes three or odd times except coming one time by which it is not more unique and xor cant make it 0
// and also dont works when there is no unique value at that time it show 0 as a unique value
// # include <iostream>
// using namespace std;
// int main ()
// {
//     int i, n, ans=0;
//     int arr[10];
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(i=0;i<n;i++){
//         ans=ans^arr[i];
//     }
//     cout<<"Unique value is "<<ans;
    
//  return 0;
// }


// # include <iostream>
// using namespace std;
// int i,j;
// int findUnique(int arr[], int n){
//     for(i=0;i<n;i++){
//         for (j=0; j<n;j++){
//           if(i!=j){
//              if(arr[i]==arr[j]){
//                 break;
//             }
//             else{continue;}
//             }
            
//         }
//     }return arr[i];
// }
// int main ()
// {
//       int i, n, ans=0;
//     int arr[10];
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Unique value is ";
//     findUnique(arr,n);

//  return 0;
// }

# include <iostream>
using namespace std;


int main ()
{
    int i,j,k, n, ans=0;
    int arr[10];
    cout<<"Enter the size of an array ";
    cin>>n;
    cout<<"Enter the values ";
     for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for (j=0;j<n;j++){
        ans = ans^arr[j];
    }
    for (k=0;k<n;k++){
        ans = ans^arr[k];
    }
    cout<<ans;
    
 return 0;
}