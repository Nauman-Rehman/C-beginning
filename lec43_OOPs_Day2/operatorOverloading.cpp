// ise abhi or clear karna hai 

# include <iostream>
using namespace std;

class A {
public:
    int a;
    int b;

public:
    int add(){
        return a+b;
    }

    void operator+ (A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Output "<< value2 - value1 <<endl;
        // cout<<"Hello Nauman"<<endl;
    }
};


int main ()
{
    A obj1, obj2;
    obj1.a = 4;
    obj1.a = 7;

    obj1 + obj2;
 return 0;
}

// another example of operator overloading
# include <iostream>
# include <string.h>
using namespace std;

class A {
    public:
        int a;
        string b;
    
    public:
        void operator* (A &obj){
            int value1 = this -> a;
            int value3 = obj.a;
            string value2 = this -> b;
            string value4 = obj.b;
            cout<< "output: "<< value3 - value1<<endl;
            cout<< "output of sring: "<< value2 + value4;
        }
};

int main(){
    A obj1, obj2;
    obj1.a = 3;
    obj2.a = 7;
    obj1.b = "man";
    obj2.b = "salman";
    
    obj1 * obj2;
}
