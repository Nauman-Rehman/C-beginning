# include <iostream>
using namespace std;

class animal {
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};


class dog: public animal {
    public:
    void speak(){
        cout<<"Barking "<<endl; // here even after inheriting animal class into a dog class we have changed the entire thing of its function
                                // so if we make an object of dog class and call this function then it shows barking 
                                // and if we make an object of animal class and call this function then it shows speaking
    }
};

int main ()
{
    
 return 0;
}