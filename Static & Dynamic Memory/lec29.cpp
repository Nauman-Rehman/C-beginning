# include <iostream>
using namespace std;
int main ()
{
    // int m,n;
    // cin>>m>>n;
    // // int *arr = new int[m][n]; // this is not a right way do make dynamic sized 2D array infact 2d array not built
    // int **rows = new int*[m]; // here we make an array of size m of pointers pointing by variable (rows)
    // for(int i=0;i<m;i++){
    //     rows[i] = new int[n]; // here each row contains n*4 memory
    // }
    // // till yet we have created a dynamic 2D array

    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>rows[i][j];
    //     }
    // }

    //     for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<rows[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // now we are going to release the memory
    // for(int i=0;i<m;i++){
    //     delete [] rows[i]; // columns memory released
    // }
    // delete []rows; // rows memory released


// the program written below is a program of jagged 2D array means which have different number of columns in each row
    int a;
    cout<<"Enter the number of rows of your array ";
    cin>>a;
    cout<<"Enter the different different size of your each row ";
    int *rows = new int[a];
    for(int i=0;i<a;i++){
        cin>>rows[i];
    }
    int **jagArr = new int *[a];
    for(int i=0;i<a;i++){
        jagArr[i] = new int[rows[i]];
    }
    for(int i=0;i<a;i++){
        cout<<"Enter the values of row "<<i+1<<" --> ";
        for(int j=0;j<rows[i];j++){
            cin>>jagArr[i][j];
        }
        // cout<<endl;
    }

for(int i=0;i<a;i++){
        for(int j=0;j<rows[i];j++){
            cout<<jagArr[i][j]<<" ";
        }
        cout<<endl;
    }

 return 0;
}
