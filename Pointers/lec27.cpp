// Double pointer is use to store the address of a pointer and so on
# include <iostream>
using namespace std;

// int update(int **p){
//     p = p+2;
//     cout<<p<<endl;
//    *p = *p+2;
//     cout<<*p<<endl;
//   **p = **p+2;
//     cout<<**p<<endl ;
//     // after understand the program written in main function understand the program of this update function by run it again and again with 
//     // different values and doing some part comment out and run remaining part
//     // when we increse the value of a pointer by 1 it increased by 4 in case of integer and after that it no longer points the previous value
//     // now it start pointing the value which is 4 bytes ahead of previous value and the address of previous value remains same
// }

// int main ()
// {
    // int num = 76;
    // int *p1 = &num; // it stores the address of num
    // int **p2 = &p1; // it stores the address of p1
    // int ***p3 = &p2; // it stores the address of p2
    // // cout<<num<<endl<<p1<<endl<<p2<<endl<<p3<<endl<<*p3<<endl<<**p3<<endl<<***p3<<endl;
    // // // after run this program it will clear to us that how double , triple pointer works
    // // cout<<num<<endl<<p1<<endl<<p2<<endl<<p3<<endl<<&num<<endl<<&p1<<endl<<&p2<<endl;
    // // cout<<endl<<endl;
    // update(p2);

// int first = 8;
// int second = 18;
// int *ptr = &second;
// *ptr = 9;
// cout<<first<<" "<<second<<endl;
// here outcome is 8 9

// int first = 6;
// int *p = &first;
// int *q = p;
// (*q)++;
// cout<<first<<endl;
// here outcome is 7

// int first = 8;
// int *p = &first;
// cout<<(*p)++<<" "; // here increament is post increament so pehle 8 prints and then 9 not 9 9
// cout<<first << endl;

// int *p = 0 ;
// int first = 110;
// *p = first; // segmentation point, program not work
// cout<<*p<<endl;

// int first = 8;
// int second = 11;
// int *third = &second;
// first = *third; // value at the address shown by the value of third means 11 --> first = 11
// *third = *third + 2; // value at the address shown by the value of third means 11 --> 11 + 2 
// cout<<first <<" "<<second<<endl; // outcome will be 11 13

// float f = 12.5;
// float p = 21.5;
// float *ptr = &f;
// (*ptr)++; // plus 1 in whatever be there in f --> 12.5 + 1 = 13.5
// *ptr = p; // replace whatever be there at the address shown by ptr by 21.5 
// cout<<*ptr <<" "<<f<<" "<<p<<endl; // output is 21.5 21.5 21.5

// int arr[5];
// int *ptr;
// cout<< sizeof(arr) <<" "<< sizeof(ptr)<<endl; // output is 20 4 because there is 5 int and 1 int take 4 bytes total 20 bytes and pointer is of 4 bytes

// int arr[] = {11, 21, 13, 14};
// cout<<*(arr)<<" "<<*(arr+1)<<endl; // output is 11 21

// int arr[6] = {11, 12, 31};
// cout<<arr<<" "<<&arr <<endl; // both will gave same answer and the answer is the address at which arr[0] is placed in the memory

// int arr[6] = {11, 21, 13};
// cout<<(arr+1) << endl; // this give me address of the first value of this array (address of 21)

// int arr[6] = {11, 21, 31};
// int *p = arr;
// cout<<p[2]<<endl; // p[2] means or it is = *(p+2) , so output is 31

// int arr[] = {11, 12, 13, 14, 15};
// cout<< *(arr)<<" "<< *(arr + 3); // output is 11 14

// int arr[] = {11, 21, 31, 41};
// int *ptr = arr++; // it shows error because we can't increase an array and here we are doing 
// cout<< *ptr << endl;

// char ch = 'a';
// char *ptr = &ch; // ptr pointing the address of ch
// ch++; // ch increased so from a it became b
// cout<<*ptr << endl; // output is b

// char arr[] = "abcde";
// char *p = &arr[0];
// cout<< p << endl; // output is complete array starting from character at 0 index to null character so --> abcde

// char arr[] = "abcde";
// char *p = &arr[0];
// p++;
// cout<<p << endl; // output is bcde

// char str[] = "babbar";
// char *p = str;
// cout<< str[0] << " "<<p[0] << endl; // both prints character of 0th index which is b so --> b b

// char str[] = "babbar";
// char *p = str;
// cout<< str << " "<<p << endl; // both prints from character of 0th index to null character so --> babbar babbar


//  return 0;
// }

// void update(int *p){ // pointer is coming
//     *p = (*p) * 2; // multiply it by 2 whatever be there in this address and there is 10 in this address so it becomes 20
//     // here not a copy comes nor a copy update , here an address come and the value at that address is update
// }

void increament(int **p){ // taking double pointer 
    ++(**p); // increament in the value of num 110 --> 111
}

int main(){
    // int i = 10;
    // update(&i); // we send address of i
    // cout<<i<<endl; // output is 20

// int first = 110;
// int *p = &first;
// int **q = &p;
// int second = (**q)++ + 9; // here increament is post increament so first 110 comes and then it increased in the first box 
// // but for the second box it is 110 + 9 so output --> 111 119
// cout<< first <<" "<< second << endl;

// int first = 100;
// int *p = &first;
// int **q = &p;
// int second = ++(**q); // pre increament means first = 101 , second =101
// int *r = *q; // address of first copied in pointer r
// ++(*r); // value of first is increased 101 --> 102
// cout<< first << " " << second << endl; // output is 102 101

int num = 110;
int *ptr = &num;
increament(&ptr); // sending an address of a pointer --> address of ptr means value of double pointer
cout<< num << endl; // output is 111

return 0;
}
