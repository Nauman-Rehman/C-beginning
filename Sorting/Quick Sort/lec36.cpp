# include <iostream>
// using namespace std;

// void swap(int& m, int& n){
//     int temp = m;
//     m = n;
//     n = temp;
//     return;
// }

// void quickSort(int arr[], int s, int n){
//     if(s>=n){
//         return;
//     }
//     int count = s;
//     for(int i = s+1; i<=n; i++){
//         if(arr[s]>arr[i]){
//             count++;
//         }
//     }
//     swap(arr[s], arr[count]);
//     int i = s;
//     int j = n;
//     while(i<count && j>count){
//         while(arr[i] <= arr[count] && i < count){
//             i++;
//         }
//         while(arr[j] >= arr[count] && j > count){
//             j--;
//         }
//         if(arr[i] > arr[j]){
//             swap(arr[i], arr[j]);
//         }
//     }
//     quickSort(arr, s, count-1);
//     quickSort(arr, count+1, n);
//     return;
// }
// the above code is also of quick sort but don't sort properly at a point with logic, and I am not sure that how many kinds of arrays it can't sort properly
// one of the array it can't properly sort is --> {4,23,67,9,2,5,9,23,6,9};



# include <iostream>
using namespace std;

void swap(int& m, int& n){
    int temp = n;
    n = m;
    m = temp;
}

int  partition(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(pivot >=arr[i]){
            count++;
        }
    }
    // place pivot at right position
    int pivotIndex = s + count;
        swap(arr[pivotIndex], arr[s]);

        // left and right vala part sambhal lete hai
        int i=s, j=e;
        while(i < pivotIndex && j > pivotIndex){
            while(arr[i] <= pivot){
                i++;
            }
            while(arr[j] > pivot){
                j--;
            }

            if(i < pivotIndex && j > pivotIndex){
                swap(arr[i++], arr[j--]);
            }
        }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
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
    quickSort(arr,0,n-1);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;
}
