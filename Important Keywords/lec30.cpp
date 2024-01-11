// # include <iostream>
// using namespace std;
// #define pi 3.14 // we can also write int pi = 3.14 in the function to use value of pi anywhere , where we want it 
// // but by defining it in this way first it don't take any specific space like a variable take 
// // and it is fixed and can't be change in function like what would happen if by mistake we change a variable pi = pi+1;
// // in that case our answer comes out wrong
// // it is called macro --> Macro is a piece of code in a program that is replaced by value of macro.
// // here (pi) is a macro

// inline int getMax(int a, int b){ // we can save our extra memory allocation by taking reference --> int getMax(int& a, int& b)
//     return (a>b) ? a:b; 
// }
// // what is the role of (inline) word here ?
// // it just means that if our function is about of 1 line or 2,3 lines then time taken in function call will be saved
// // it just put these 1,2 lines of function and put wherever be this function is called at the time of compilation
// // just works same as macros and note it don't work in complex functions ex--> functions more than 3 lines
// int main ()
// {
//     int r =5;
//     cout<<"area of circle is "<<pi *r *r<<endl;

//     int a = 1,b=2;
//     int ans=0;
//     // if(a>b){
//     //     ans = a;
//     // }
//     // else{ans = b;}
// // these if else statement can be replaced by one line which is written below
// ans = (a>b) ? a:b;
// cout<<ans<<endl;
// a = a+4;
// b= b+1;
// ans = (a>b) ? a:b;
// cout<<ans<<endl;

// // we can also use this in calling function
// ans = getMax(a,b);
// cout<<ans<<endl;
//  return 0;
// }

# include <iostream>
using namespace std;

int print(int arr[], int size, int start = 0, int end = 5){ // here start is initialize by 0 so in the case if start is not given by main function
// then it automatically take start = 0 and if given then take that particular value
// one more thing is also there that default argument must be at rightmost side in the brackets of our function 
// and in case of more than one default argument it is right to left
    for(int i=start;i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main ()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    print(arr,size);
    print (arr,size,2);
 return 0;
}
