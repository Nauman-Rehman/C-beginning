// Pointer is used to store the address or pointer stores address of any variable
# include <iostream>
using namespace std;
int main ()
{
    float num = 55.1;
    cout<<"The address of num is "<<&num<<endl;
    // int ptr = &num; // here ptr is still a variable and a variable never holds address of another variable so it shows error
    // int *ptr = num; // here ptr is a pointer and pointer holds address of variable not its value so it also shows error
    float *ptr = &num;   // here ptr is a pointer and it carrying the address of variable num so it is a the right way to write pointer
    cout<<ptr<<endl;
    num++;
    cout<<*ptr<<endl;
    cout<<"Size of num is "<<sizeof(num)<<endl;
    cout<<"Size of ptr is "<<sizeof(ptr)<<endl;
    int i = 44;
    int *p = 0;
    p = &i; // we can also make pointer by this way
    int b=6;
    int a = b;
    a++;
    cout<<b<<endl; // here the value of b will not increase
    int *p2 = &b;
    p++;
    cout<<b<<endl; // here also b remains same
    int c = 7;
    int *p3 = &c;
    int d = *p;
    d++;
    cout<<c<<endl; // in this case also the value of c doesn't change
    (*p3)++;
    cout<<c<<endl; // but now the value of c had increased because now we target at the address of p3 and increase the value address of which is pointed by p3
    int *q=p; //copying a pointer
    cout<<q<<endl;
    cout<<*q<<endl;
 return 0;
}
