# include <iostream>
using namespace std;

// bool isPalindrome(char arr[], int i, int j){
//     if(i>j){
//         return true;
//     }
//     if(arr[i]==arr[j]){
//         i++; j--;
//         isPalindrome(arr,i,j);
//     }
//     else{return false;}
// }

// string reverse(char a[], int i, int j ){
//     cout<<"Call received for "<<a<<endl;
//     if(i>j){
//         return a;
//     }
//     int temp = a[i];
//     a[i] = a[j];
//     a[j] = temp;
//     i++;  j--;
//     reverse(a,i,j);
//     return a;
// }

// int main ()
// {
//     int n;
//     cout<<"Enter the size of your word ";
//     cin>>n;
//     char name[n];
//     cout<<"write your name ";
//     cin>>name;
//     cout<<"See how it reversed step by step"<<endl;
// cout<<"reverse is "<<reverse(name,0,n-1)<<endl;

// if(isPalindrome(name,0,n-1)==0){
//     cout<<"This is not a palindrome";
// }
// else{cout<<"This is a palindrome";}
//  return 0;
// }

// trying to do bubble sort by using double recursion and function inside a function (nested function)
// but can't
double power(int a, int b){
    if(b==0){
        return 1;
    }
    // if(b==1){
    //     return a;
    // }
      int  ans = power(a,b/2);
    if(b%2== 0){
        return ans * ans;
    }
    else{return a*ans*ans;}
}


int bubbleSort(int arr[], int n){
    if(n==1){
        return arr[0];
    }
    auto swap = [](int& m, int& n){
    int temp = m;
    m=n;
    n= temp;
};
    auto again = [&](int i = 0, int p=arr[i], int q = arr[i+1] ){
        // if(i==arr[n-1]){
        //     return;
        // }
        if(i<n-1){
        if(p>q){
            swap(arr[i],arr[i+1]);
            again(i++,j++);
        }
        }
    };
    bubbleSort(arr,n-1);
    }
    


int main(){
    // int a,b;
    // cout<<"Enter the number ";
    // cin>>a;
    // cout<<"Enter it's power ";
    // cin>>b;
    // cout<<"The value of "<<a<<" raise to power "<<b<<" is "<<power(a,b);

    int arr[4]= {2,1,4,3};
    bubbleSort(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }
    return 0;
}
// another bubble sort using recursion
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
    if(size == 0 || size == 1){
        return;
    }
    for(int i=0; i< size-1; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            bubbleSort(arr,size-1);
        }
    }
    return;
}

int main() {
    // Write C++ code here
    int arr[] = {4,7,3,9,2,0,1,7,54,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i:arr) cout<<i<<" ";
    return 0;
}
