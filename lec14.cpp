
// my method
// # include <iostream>
// using namespace std;
// int findPivot(int arr[], int size){
//     int s = 0 , e = size - 1 , m = s + (e-s)/2;
//     while(s<=e){
//         if(arr[0]>arr[m] && arr[m]<arr[m+1]){
//             e=m-1;
//         }
//          if(arr[0]<arr[m] && arr[m]<arr[m+1]){
//             s=m+1;
//         }
//          if(arr[0]<arr[m] && arr[m]>arr[m+1]){
//             return m+1;
//         }
//         if(arr[m-1]>arr[m] && arr[m]<arr[m+1]){
//             return m;}
//        m = s + (e-s)/2; 
//     }
// }
// int main ()
// {
//     int arr[10];
//     int i,n;
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int Pivot = findPivot(arr,n);
//     cout<<"The index of pivot value is "<<Pivot;
//  return 0;
// }

// babbar bhai ka tarika
//  # include <iostream>
// using namespace std;

// int findPivot(int arr[], int n){
//     int s=0;
//     int e=n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s= mid+1;
//         }
//         else{e= mid;}
//     mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main ()
// {
//     int arr[10];
//     int i,n;
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int Pivot = findPivot(arr,n);
//     cout<<"The index of pivot value is "<<Pivot;
//  return 0;
// }
// # include <iostream>
// using namespace std;

// int findPivot(int arr[], int n){
//     int s=0;
//     int e=n-1;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s= mid+1;
//         }
//         else{e= mid;}
//     mid = s + (e-s)/2;
//     }
//     return s;
// }


// int findnum(int arr[],int n,int key){
// int start =0 , end = n-1 , mid = start + (end - start)/2;
// if (key<=arr[end]){
//     start = findPivot(arr,n);
// }
// else if (key>arr[end]){
//     end = findPivot(arr,n) - 1;
// }
// while(start<=end){
//     mid = start + (end - start)/2;
//     if (key==arr[mid]){
//         return mid;
//     }
//     if (key>arr[mid]){
//         start=mid+1;
//     }
//     else{end = mid -1 ;}
// }
// return -1;
// }
// int main ()
// {
//     int arr[10];
//     int i,n,key;
//     cout<<"Enter the size of an array ";
//     cin>>n;
//     cout<<"Enter the values ";
//     for(i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j = 0; j<11;j++){
//     cout<<"Enter the value you want to find out in this array ";
//     cin >>key;
//      int Pivot = findnum(arr,n,key);
//      if(Pivot!=-1){cout<<"The index of this value is "<<Pivot<<endl;}
//     else{ cout<<"This value is not available in this array."<<endl;}
//     }
//  return 0;
// }


# include <iostream>
using namespace std;

int root(int n){
    int start = 0;
    int end=n;
    int mid =start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        int square = mid*mid;
        if (square == n){
            return mid;
        }
        if(square<n){
            ans = mid;
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        
       mid= start + (end - start)/2;
    }
    return ans ;
}

double morePricision(int n, int precision, int temp){
    double factor = 1;
    double ans = temp;
    for(double i=0;i<precision;i++){
        factor=factor/10;
        for(double j= ans;j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}
int main ()
{
    int n;
    cout<<"Enter the number whose square root you want to find out ";
    cin>>n;
    double temp = root(n);
    cout<<"The square root of "<<n<<" is "<<morePricision(n,3,temp);
 return 0;
}