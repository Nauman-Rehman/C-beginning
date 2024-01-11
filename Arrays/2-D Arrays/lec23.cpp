// # include <iostream>
// # include <vector>
// using namespace std;
// bool isPresent(int arr[][4],int key, int m, int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if (arr[i][j]==key){
//                 cout<<"Your number is present at row "<<i+1<<" and at column "<<j+1<<endl;
//                 return 1;
//             }
//         }
//     }
//     return 0;   
// }
// int maxRow(int arr[][4],int m, int n){
//     int maxRowNum =0;
//     int max = 0;
//     for(int i=0;i<m;i++){
//         int sum =0;
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//         }
        
//     if(sum>max){
//         max= sum;
//         maxRowNum++;
//     }
//     }
//     cout<<"The number of that row sum of which is maximum is "<<maxRowNum<<endl;
//     return max;
// }

// void getSum(int arr[][4], int m, int n){
//     // to get sum column wise
//      for(int i=0;i<n;i++){
//     int sum=0;

//         for(int j=0;j<m;j++){
//         sum+=arr[j][i];}
//         cout<<"The sum of column "<<i+1<<" is "<<sum<<endl;
//      }

//     // to get sum row wise
//      for(int i=0;i<m;i++){
//     int sum=0;

//         for(int j=0;j<n;j++){
//         sum+=arr[i][j];}
//         cout<<"The sum of row "<<i+1<<" is "<<sum<<endl;
//      }
// }

// void spiralPrint(vector<vector<int>>&mat, int m, int n){
//     int top=0, bottom=m-1, left=0, right=n-1;
//     while(top<=bottom && left<=right){
//         for(int j=left; j<=right; j++){
//             cout<<mat[top][j]<<" ";
//         }
//         top++;
//         for(int i=top; i<=bottom; i++){
//             cout<<mat[i][right]<<" ";
//         }
//         right--;
//         for(int j=right; j>=left; j--){
//             cout<<mat[bottom][j]<<" ";
//         }
//         bottom--;
//         for(int i=bottom; i>=top; i--){
//             cout<<mat[i][left]<<" ";
//         }
//         left++;
//     } 
// }

// void rotate90(vector<vector<int>> mat, int m, int n){
//     for(int j=0;j<n;j++){
//         for(int i=m-1;i>=0;i--){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main ()

// {
//     // creating 2D array
//     // int arr[3][4];
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<4;j++){
//     //         cin>>arr[i][j];
//     //     }
//     // }
    
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<4;j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     // }
//     // cout<<endl;
//     //  for(int i=0;i<3;i++){
//     //     for(int j=0;j<4;j++){
//     //         cout<<arr[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     //  for(int i=0;i<4;i++){
//     //     for(int j=0;j<3;j++){
//     //         cout<<arr[j][i]<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     int ar2[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<ar2[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int ar1[3][4] = {1,2,3,4,9,10,11,12,5,6,7,8};
//     int key;
//     cout<<"Enter the number you want to find out ";
//     cin>>key;
//     if(isPresent(ar1,key,3,4) == 0){
//         cout<<"This number is not present in the array"<<endl;
//      }
//     //  else { cout<<"This number is present at "<<isPresent(ar1,key,3,4)<<endl;}
//     getSum(ar1,3,4);
//     cout<<"Maximum among these is "<<maxRow(ar1,3,4)<<endl;
    
//     int ar3[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout<<ar3[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // int i=0;
//     // for(int j=0;j<4;j++){
//     //     if(j%2==0){ // if j is even 
//     //         for(int i=0;i<3;i++){
//     //             cout<<ar3[i][j]<<" ";
//     //         }
//     //     }
//     //     else{
//     //         for(int i=2;i>=0;i--){
//     //             cout<<ar3[i][j]<<" ";
//     //         }
//     //     }
//     // }
    
//     int m,n;
//     cout<<"Enter the rows and columns of the matrix ";
//     cin>>m>>n;
//     vector<vector<int>> mat(m,vector<int>(n)); // what is this ? So listen when we write [vector<int> v] what had happened ? --> 
//     // a container is formed which have dynamic memory
//     // and in the case of [vector<vector<int>> v] a container of dynamic memory is formed whose each element also have container of dynamic memory
//     // for making unknown number of rows which have unknown number of elements to make a dynamic matrix
//     cout<<"Enter the values ";
// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cin>>mat[i][j];
//     }
// }

// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }
// spiralPrint(mat,m,n);
// cout<<endl;

// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//       cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<"After rotating by 90 degree "<<endl;
// rotate90(mat,m,n);
// cout<<endl;

//  return 0;
// }

# include <iostream>
# include <vector>
using namespace std;

int binSearch(vector<vector<int>> &mat, int m, int n, int key){
    // for sorted matrix
    // but not work for some values like 6;
    int s=0, e=(m*n)-1, mid = s+(e-s)/2; 
    while(s<=e){
        int element =  mat[mid/n][mid%n];
        if(key == element){
            return mid;
        }
        else if(key< element){
            e =  element - 1;
        }
        else{s =  element + 1;}
         mid = s+(e-s)/2;
    }
    return 0;
}

int bin2Search(vector<vector<int>> mat, int m, int n, int key){
    // binary search in that matrix which is sorted row wise and column wise individually
    int row = 0, col = n-1;
    while(row<m && col>=0){
    if(key == mat[row][col]){
        cout<<key<<" is present at row "<<row+1<<" and column "<<col+1<<endl;
        return 1;
    }
    else if(key< mat[row][col]){
        col--;
    }
    else{row++;}
    }
    return 0;
}


int main ()
{
//     int m,n,key;
//     cout<<"Enter the number of rows and number of columns of matrix ";
//     cin>>m>>n;
//     vector<vector<int>> mat(m,vector<int>(n));
//     cout<<"Enter the values ";
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"Enter the number you want to find out ";
//     cin>>key;
//     binSearch(mat,m,n,key);
//     if(binSearch(mat,m,n,key)==0){
//         cout<<"This number is not present in the matrix ";
//     }
//     else {cout<<"This number is present at "<< binSearch(mat,m,n,key);
//    }


 int m,n,key;
    cout<<"Enter the number of rows and number of columns of matrix ";
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n));
    cout<<"Enter the values ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
   for(int i=0;i<6;i++){ cout<<"Enter the number you want to find out ";
    cin>>key;
    // bin2Search(mat,m,n,key); // this line is calling the function and if statement also which is below so to prevent 2 times printing this line is comment out
    if(bin2Search(mat,m,n,key)==0){
        cout<<"This number is not present in the matrix "<<endl;
    }
//     else {cout<<"This number is present at "<< bin2Search(mat,m,n,key);
//    }
}
 return 0;
}

