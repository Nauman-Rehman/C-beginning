# include <iostream>
using namespace std;

// bool isPossible(int arr[], int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;
//     for(int i=0;i<n;i++){
//         if(pageSum + arr[i]<= mid){
//             pageSum += arr[i];
//         }
//         else{studentCount++;
//         if(studentCount > m || arr[i]>mid){
//             return false;
//         }
//         pageSum = arr[i];
//         }
//     }
//     return true;
// }

// int bookAllocate(int arr[], int n,int m,int sum){
//     int s= 0;
//     int e = sum;
//     int ans= -1;
//     int mid = s + (e-s)/2;
//     while(s<=e){
//         if(isPossible(arr,n,m,mid)){
//             ans = mid;
//             e= mid -1;
//         }
//         else{s = mid + 1;}
//         mid= s + (e-s)/2;
//     }
//     return ans;
// }
// int main ()
// {
//     int arr[10];
//      int n;
//     cout<<"Enter the number of books ";
//     cin>>n;
//     cout<<"Enter the number of pages of books in the sequence they are arranged ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//      int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     int allocation = bookAllocate(arr,n,2,sum);
//     cout<<allocation<<" and "<<sum-allocation;
//  return 0;
// }


# include <iostream>
using namespace std;

bool isPossible(int arr[],int k,int n, int each){
    int painterCount = 1;
    int sum= 0;
    for(int i=0;i<n;i++){
        if(sum + arr[i] < each){
            sum += arr[i];
        }
        else{painterCount++;
        if((painterCount>2) || (arr[i]>each)){
            return false;}
            sum = arr[i];
        }

    }
    return true;
}

int boardAllocate(int arr[], int k, int n, int sum){
    int start = 0 , end = sum , each = start + (end-start)/k;
    int ans = -1;
    while(start<=end){
         if(isPossible(arr,k,n,each)){
            ans = each;
            end= each -1;
        }
        else{start = each + 1;}
        each= start + (end-start)/k;
    }
    return ans;
    }

int main ()
{
    int arr[15];
    int n;
    int k;
    cout<<"Enter the number of boards ";
    cin>>n;
    cout<<"Series wise enter the number of boards in each room on which to paint ";
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Enter the number of painters available ";
    cin>>k;
     int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int allocation = boardAllocate(arr,k,n,sum);
    cout<<allocation<<" and "<<sum-allocation;
 return 0;
}