
// Hybrid inheritance = When there is combination of two or more than two inheritance then we call it hybrid inheritance
# include <iostream>
using namespace std;

class Animal {

public:
    int age;
    int weight;

public:
    void speak(){
        cout<<"Speaking "<<endl;
    }    
};

class Dog: public Animal { // this is single level inheritance from Animal to Dog
    
    public:
    void bark(){
        cout<<"Barking "<<endl;
    }
};

class GermanShephered: public Dog { // Now this is multilevel inheritance from Animal to Dog and then Dog to GermanShephered and so on
 
};

class car {
    public:
    void run(){
        cout<<"Running "<<endl;
    }
};

class robot {
    public:
    void action(){
        cout<<"Performs many tasks "<<endl;
    }
};

class transformer: public car, public robot { // this is known as multiple inheritance

};

class livingBeing { // hierarchy of human and bird class ( hierarchical inheritance)
    public:
    void breath(){
        cout<<"Breathing ";
    }
};

class human: public livingBeing  { // hierarchy of male and female class
    public:
    int intelligency;
};

class bird: public livingBeing {
    public:
    void fly(){
        cout<<"flying "<<endl;
    }
};

class male: public human {
    public:
    void beard(){
        cout<<"Having beard ";
    }
};

class female: public human {
    public:
    void beard(){
        cout<<"Not having beard ";
    }
};



int main ()
{
    GermanShephered g1;
    g1.speak(); // object of class GermanShephered get the methods or functions of class Animal
    g1.bark(); // object of class GermanShephered get the methods or functions of class Dog
    g1.age;
    

    transformer t1;
    t1.run(); // inherit by class car
    t1.action(); // inherit by class robot

   
 return 0;
}