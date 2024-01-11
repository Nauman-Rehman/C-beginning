// #include <iostream>
// using namespace std;

// int printarray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << "The value in array at position " << i << " is " << arr[i] << endl;
//     }
// }

// int main()
// {

//     int six[6] = {4, 2455, 63, 436, 13, 563};
//     int eight[8] = {432, 456, 67453, 2143, 576, 32, 634, 24};

//     printarray(six, 6);
//     printarray(eight, 8);
//     return 0;
// }

// // program to find maximum value from an array :: made by me
// # include <iostream>
// using namespace std;

// int compare(int i , int j){
//     if(i>j){ return i;}
//     else return j;
// }
// int main ()
// {
//     int findMax[7]={322654,5343,345,233,45,535,345737};
//     int a,b;
//     for( a=0;a<7;a++){
//         for( b=(a+1);b<7;b++){
//             compare(findMax[a],findMax[b]);
//             if ( compare(findMax[a],findMax[b]) == findMax[b]){break;}
//         }if(b==7){break;}
//     }cout<<"The maximum is "<<findMax[a];

//  return 0;
// }

// #include <iostream>
// using namespace std;

// int getMax(int num[], int n)
// {
//     int max = INT32_MIN;
//     // INT32_MIN means -2 raise to power 32
//     for (int i = 0; i < n; i++)
//     {
//         if (max < num[i])
//         {
//             max = num[i];
//         }
//     }
//     return max;
// }

// int getMin(int num[], int n)
// {
//     int min = INT32_MAX;
//     // INT32_MAX means 2 raise to power 32
//     for (int i = 0; i < n; i++)
//     {
//         if (min > num[i])
//         {
//             min = num[i];
//         }
//     }
//     return min;
// }
// int main()
// {
//     int n;
//     int num[100];
//     // here we fix the size of array = 100 because array works on static memory allocation not dynamic
//     // if we write i or declare any other variable in place of 100 then our program donot run
//     // size of array should be declared before compilation
//     cout << "Define the size of an array ";
//     cin >> n;
//     cout << "Enter it's values ";
//     for (int i=0; i < n; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "Minimum among these is " << getMin(num, n) << endl;
//     cout << "Maximum among these is " << getMax(num, n) << endl;
//     // in the above cout line we can see that we only write num and not num[] in the bracket of getMin and getMax
//     // this makes to pass the address of first value of an array
//     return 0;
// }

// updating a value of any index of an array in a derived or called function results in updating its value in whole program
// because while calling a function we pass its address and not its copy or value 
// so changing the value from an address causes its changing for whole program
// # include <iostream>
// using namespace std;

// int update(int arr[], int n){

//     cout<<"coming to update function ";
// arr[1] = 54;
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"return to main function ";
// }

// int main ()
// {
   
//     int  arr[3]={1,2,3};
//      update(arr,3);
//     for (int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//  return 0;
// }

// // homework = finding out sum of values of array
// # include <iostream>
// using namespace std;
// int main ()
// {
//     int arr[6]={23,-14,54,23,-23,0};
//     int sum = 0;
//     for (int i=0;i<6;i++){
//         sum = sum + arr[i];
//     }
//     cout<<"The sum is "<<sum;
//  return 0;
// }

// linear search
// # include <iostream>
// using namespace std;

// bool search(int arr[], int size, int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }return 0;
// }
// int main ()
// {
//     int key;
//     int arr[7] = {2,54,-4,435,76,8,0};
//     cout<<"Enter the value you want to find that it is in this array or not ";
//     cin>>key;
//     bool found = search(arr,7,key);
//     if (found){
//         cout<<"The number is present";
//     }
//     else cout<<"The number is absent";
//  return 0;
// }

// reverse an array
# include <iostream>
using namespace std;
int main ()
{
    int i,n;
    int arr[10];
    cout<<"Tell the size of an array ";
    cin>>n;
    cout<<"Enter the values of an array ";
    for (i=0;i<7;i++){
        cin>>arr[i];
    }
    for (i=6;i>=0;i--){
        cout<<arr[i]<<" ";
    }
 return 0;
}
