// Polymorphism are of two tupes --> (i) compile time polymorphism , (ii) run time polymorphism
// Compile time polymorphism (static polymorphism) are of 2 types --> (i) function overloading , (ii) operator overloading
// Run time polymorphism (dynamic polymorphism) are of 2 types --> (i) function overriding , (ii)
# include <iostream>
using namespace std;

class A {
    public:
        void sayhello(){
            cout<<"Hello Nauman "<<endl;
        }

        // void sayhello(){
        //     cout<<"Hello "<<endl;
        // }
        // here we make function overloading because we have made 2 function with same name so it shows error at run time 
        // to use function overloading without any error we just  have to change the signature of our function

        void sayhello(string name){ // here by taking string in input we have changed the signature of our function
            cout<<"Hello "<<name<<endl;
        }

        void sayhello(int n){ // also use overloading by changing the signature type
            cout<<"number is "<<n<<endl;
        }

        // also by creating default argument like [void sayhello(int n = 8){}] but in some cases where the input from main function not seems to calling more than 1 function
};

int main ()
{
    A obj1;
    obj1.sayhello();
    obj1.sayhello("Nauman Rehman");
    obj1.sayhello(7);
 return 0;
}