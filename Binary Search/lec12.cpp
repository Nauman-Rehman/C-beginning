
// binary search
// necessary condition = values in array must be sorted (means follow a sequence)
// there must be any kind of sequence in an array
# include <iostream>
using namespace std;

int findIndex(int arr[], int size, int key){
    int start=0, end=size-1;
    while(start<=end){
    // int mid = (start + end)/2;
    // by the use of above commented line if our start and end both are of size (2^31-1) then sum of these will go out of range
    // so we use 2nd method which is below 
    int mid = start + (end-start)/2;
    
    if (arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        start = mid+1;
    }
    else{
        end = mid - 1;
    }
    }
    return -1;
}
int main ()
{
    int n;
    int even[6]={2,4,5,6,67,87};
    int odd[7]={3,67,77,78,88,89,92};
    cout<<"Enter the value you want to find out that on which index it is located ";
    cin>>n;
    int indexOfEven = findIndex(even,6,n);
    int indexOfOdd = findIndex(odd,7,n);

    cout<<"The index of "<<n<<" in even array is ";
    
    if(indexOfEven!=-1){
        cout<<indexOfEven<<endl;
    }
    else{cout<<"not exist"<<endl;}
    cout<<"The index of "<<n<<" in odd array is ";
     if(indexOfOdd!=-1){
        cout<<indexOfOdd;
    }
    else{cout<<"not exist";}
     return 0;
}
