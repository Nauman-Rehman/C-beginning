# include <iostream>
using namespace std;

// int& func(int a ){ // writing in this way is so much bad practice because we don't take any reference variable
// // and made a reference function so it's variable ans is a local variable and get diminished after the end of this function
// // so in return we are not giving anything 
//     int num = a;
//     int& ans = num;
//     return ans;
// }

// int* func2(int n){
//     int* ptr = &n;
//     return ptr;  // same problem comes here it will also can't give any value in return
// }

// void update2(int& n){
//     n++;
// }

// int main ()
// {
//     int i = 6;
//     int &j = i;
//     cout<<i<<" "<<j<<" "<<j++<<" "<<i++<<endl;
    
//     int n = 5;
//     cout<<"Before "<< n<<endl;
//     update2(n);
//     cout<<"After "<< n<< endl;

//     func(n); // is function me code work nhi karega
//     func2(n);
//  return 0;
// }

int getSum(int *arr,int n){
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int *ptr = new int[n]; // new keyword is use to take dynamic size of an array 
    // the memory allocation of all int, char , string , float are allocared in stack and we have static memory allocation in stack
    // static memory allocation means that we have to know the allocated memory at compile time 
    // by using of new keyword memory allocation held in heap which woks on dynamic memory allocarion
    // dynamic memory allocation means that at compile time allocated memory can be unknown and later take it by input at runtime
    // specification of new keyword or this dynamic memory allocation is that it don't have variable name see we only write new int[n]
    // we can target it only by it's pointer which is located in stack but addressing in heap 
    cout<<"Enter the values ";
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }

    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }

   cout<<endl<< getSum(ptr,n);

   // in stack memory is released automatically after functioning but 
   // in heap it is not released even after complition of a function
   // to release memory in heap we have to use delete keyword

   int *i = new int;
   int *arr = new int[n];

   delete i; // releasing memory --> 4 byte
   delete arr; // releasing dynamic memory --> n*4 byte
   return 0;
}

// Homework --> void pointer, address typecasting