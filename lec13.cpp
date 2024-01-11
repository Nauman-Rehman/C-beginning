// // find first and last occurrence of a number
// // mera banaya hua
// #include <iostream>
// using namespace std;

// int find1stOccurrence(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1;
//     while(start<=end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == key)
//         {
//             while (arr[mid] == key)
//             {
//                 mid = mid - 1;
//             }
//             return mid + 1;
//         }
//         if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }
// int findlastOccurrence(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1;
//     while(start<=end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == key)
//         {
//             while (arr[mid] == key)
//             {
//                 mid = mid + 1;
//             }
//             return mid - 1;
//         }
//         if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     int arr[15] = {0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4};
//     cout << "Enter that number of which first and last occurrence you want to find out ";
//     cin >> n;
//     int firstOccurrence = find1stOccurrence(arr, 15, n);
//     int lastOccurrence = findlastOccurrence(arr, 15, n);
//     if ((firstOccurrence && lastOccurrence) != -1)
//     {
//         cout << "The first occurrence of the number " << n << " is on the index " << firstOccurrence << endl;
//         cout << "and the last occurrence is on the index " << lastOccurrence;
//     }
//     return 0;
// }

// babbar bhai ka 
// # include <iostream>
// using namespace std;
// int find1stOccurrence(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1;
//      int mid = start + (end - start) / 2;
//      int ans=-1;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid-1;
//         }
//        else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//          int mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int findlastOccurrence(int arr[], int size, int key)
// {
//     int start = 0, end = size - 1;
//      int mid = start + (end - start) / 2;
//      int ans=-1;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             start = mid+1;
//         }
//        else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//          int mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// int main ()
// {
//     int n;
//     int arr[15] = {0, 1, 1, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4};
//     cout << "Enter that number of which first and last occurrence you want to find out ";
//     cin >> n;
//     int firstOccurrence = find1stOccurrence(arr, 15, n);
//     int lastOccurrence = findlastOccurrence(arr, 15, n);
    
    
//         cout << "The first occurrence of the number " << n << " is on the index " << firstOccurrence << endl;
//         cout << "and the last occurrence is on the index " << lastOccurrence;
    
    
//  return 0;
// }


// peak index in a mountain array problem
# include <iostream>
using namespace std;
int findPeak(int arr[],int size){
    int start = 0 , end = size-1 , mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{end = mid-1;}
         mid = start + (end - start)/2;
    }
}
int main ()
{
    int size;
    int arr[15];
    cout<<"Enter the size of an array ";
    cin>>size;
    cout<<"Enter the values ";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int peak = findPeak(arr,size);
    cout<<"The index of peak value is "<<peak;
 return 0;
}