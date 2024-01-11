// // we can't reassign the address of any variable ones it is stored in momory
// # include <iostream>
// using namespace std;
// int main ()
// {
//     int arr[10] = {1,5,7,55,2,89,76,84,92};
//     cout<<"The address of first memory block is "<<arr<<endl; // this give me address of first block of array
//     cout<<"The address of first memory block is "<<&arr<<endl; // this also give me address of first block of array
//     cout<<"The address of first memory block is "<<&arr[0]<<endl; // and this one also give me address of first block of array
//     cout<<"The address of 2nd memory block is "<<&arr[1]<<endl; // this give me address of 2nd block of array which is 4 bytes ahead of 1st  
//     cout<<"The address of 3rd memory block is "<<&arr[2]<<endl; // this give me address of 3rd block of array which is 4 bytes ahead of 2nd  
//     cout<<"The address of 4th memory block is "<<&arr[3]<<endl; // this give me address of 4th block of array which is 4 bytes ahead of 3rd  
//     cout<<"The value at 0th index (1st block) "<<*arr<<endl; // this give me value of 0th index 
//     cout<<"After increase 0th index value by 1 "<<*arr + 1<<endl; // first it take value of 0th index and add 1 to it.--> ex- (1)+1 = 2;
//     cout<<"The value at 1st index (2nd block) "<<*(arr + 1)<<endl; // this gives the value of index 1 which is 5
//     cout<<"The value at 3rd index (4th block) "<<*(arr + 3)<<endl; // this gives the value of index 3 which is 55
//     // means --> arr[i] = *(arr+i)  and  i[arr] = *(i+arr) both are same , both do same work
//     cout<<"Trying with the new method we have learnt just "<<3[arr]<<endl; // it works correctly
//     cout<<sizeof(arr)<<endl;
//     int *ptr = &arr[6];
//     cout<<sizeof(arr[6])<<endl;
//     cout<<sizeof(ptr)<<endl;
//     cout<<sizeof(*ptr)<<endl;
//     cout<<sizeof(&ptr)<<endl;
//     // arr = arr +1; // we can't write by this way
//     ptr = ptr + 1; // but this is right to write ptr pointing the address of arr[6] (ptr +1) points the address of arr[7] means by adding 1 it goes 4 bytes ahead 
//  return 0;
// }


# include <iostream>
using namespace std;

int print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}

int update(int *p){
    p=p+1;
    cout<<"inside the update function "<<p<<endl;
}

int update2(int *p){
    *p = *p + 1;

}

int getSum(int arr[],int size){
int sum = 0 ;
for(int i=0;i<size;i++){
    sum+=arr[i];
}
return sum;
}

int main ()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout<<arr<<endl; // it prints the address of arr[0]
    cout<<ch<<endl; // but it don't prints the address of ch[0] it prints complete char array from 0th index till it find null factor

    char *c = &ch[1];
    cout<<c<<endl; // it also don't prints the address of ch[1], it prints the complete char array from index 1 to null factor

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl; // here something different had happened we know that temp only had 1 char and in this line we are trying to print p 
                   // which is a pointer and we know that in the case of char it doesn't print the address but prints the char 
                   // untill it finds null character but in temp there is only one character (z) and not any null character 
                   // so in this case it write z than go ahead in memory and print whatever be there untill it founds null factor

    // use of pointer in calling a function 
    int value = 34;
    int *pointer = &value;
    print(pointer);

    cout<<"before "<<pointer<<endl; // it gives the address of value before update
    update(pointer); // updating 
    cout<<"after "<<pointer<<endl; // it gives the address of value after update but address of value not changed
    // when we call the function update and give pointer to it ofcourse it update the pointer but not the address of value
    // we can see the change by take output from the update function after update

    cout<<"Value before update "<<*pointer<<endl;
    update2(pointer); // int this function we are updating the value not it's address 
    cout<<"Value after update "<<*pointer<<endl; // now the value had increased by 1;

    cout<<"Sum is "<<getSum(arr +2, 3)<<endl; // it sends (arr) array not from starting but it's part start from index 2 to last 

 return 0;
}