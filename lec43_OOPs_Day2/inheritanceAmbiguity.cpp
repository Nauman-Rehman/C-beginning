
class A{
    public:
        void func(){
            cout<<"class A called "<<endl;
        }
};

class B{
    public:
        void func(){
            cout<<"class B called "<<endl;
        }
};

class C: public A, public B {

};

# include <iostream>
using namespace std;
int main ()
{
     C object1;
    // object1.func(); // here it shows error because class A and class B both have (func) function and class C is inherited by both the classes
                    // so it can't understand that func of which one is to be called and we have to write it in this way

    object1.A::func(); // means to call the func of class A
    object1.B::func(); // means to call the func of class B
    
 return 0;
}