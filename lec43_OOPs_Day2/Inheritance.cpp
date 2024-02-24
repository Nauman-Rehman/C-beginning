// private members of any class can't be inherit 
// when we inheriting publicly any class then public members of base class remains public in sub class, protected remains protected in sub class, and private members of base class can't be accessible
// when we inheriting protectively any class then public members of base class became protected in sub class, protected remains protected in sub class, and private members of base class can't be accessible
// when we inheriting privately any class then public members of base class became private in sub class, protected also became private in sub class, and private members of base class can't be accessible


# include <iostream>
using namespace std;

class Human{

    protected:
        int size;
        int height;

    public:
        int weight;
        int age; 

    public:
        int getAge() {
            return this->age;
        }    
        int setWeight(int w) {
            this->weight = w;
        }

};

class Male: public Human{ // by writing this we have inherit the public properties of human class into male class


    public:
        string colour;

    void sleep(){
        cout<<"Male is sleeping "<<endl;
    }   
    int getHeight(){
        return this->height;
    } 

};

int main ()
{
    Male object1;
    cout<<object1.age<<endl;
    // cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.colour<<endl;

    object1.sleep();

    object1.setWeight(100);
    cout<<object1.weight<<endl;
    // cout<<object1.size<<endl;

    cout<<object1.getHeight()<<endl;
    
 return 0;
}