// constructor ka khel kuch kuch function ke jesa hota hai. Jab apan main function me kisi class ka koi object banate hai let say hero class me salman banaya 
// to voh ese banta hai [hero salman] to 1 invisible constructor ban jata hai [hero()] esa or apan agar khud se esa banate hai to apna banaya hua display hota hai or jo automatic bana tha voh delete ho jata hai
//agr me main function me jo object banaya hai voh kuch esa hai [hero salman(10)] to jo constructor banega voh [hero (int n)] type ka banega
// or same agar object is [hero salman(10,'B')]type ka hai to constructor [hero(int n, char c)] type ka banega and so on 
// or ha agar kisi constructor ko delete karte hai to uske type ke jo object main function me the voh error show karne lagenge
// jo constructor apan banate hai voh parameterized constructor kehlate hai 

# include <iostream>
# include <string.h>
// # include "hero.cpp" // we can also use a class by this way by making a class in another file and and include that here
using namespace std;

class hero{
// blank class also occupy a space of 1 byte
// properties
private:
int health;
// int health = 70;
// now here integer came which is of 4 byte so now the size of h1 is not 5 but it is 4 because of int 
// only blank class occupy 1 byte if there are some properties of it, it will occupy that much space
public: // now health is private member
char* name;
char level; 
// int health = 70;
hero(){ // this is the constructor made by us and there is another constructor which had made automatically whenever we make a class
// but if we make a constructor by ourself then the old one delete automatically which was bydefault come into existence
  cout<<"Simple Contructor called"<<endl;
  name = new char[100];
}

hero(int health){
  cout<<"this ->"<<this-> health << endl; // this -> health = the health declared first --> int health = 70;
  cout<<"without this ->"<< health << endl; // health = the health declared just above --> hero (int health)
  this -> health = health; // this is a pointer of a current object, here we replace 70 health by the coming new health (10) coming from aamir
}

hero (int health, char level){
cout<<"health of akshay is "<<health<<endl;
cout<<"level of akshay is "<<level<<endl;
}

// copy constructor
hero (hero& temp){ // here & is necessary because pass by value causes infinite looping because in pass by value it make a copy and 
// copy calls copy constructor again and so on so we do pass by reference
char *ch = new char[strlen(temp.name)+1];
strcpy(ch, temp.name);
this->name = ch;

  cout<<"Copy constructor called"<<endl;
  this -> health = temp.health;
  this -> level = temp.level;
}



void print(){
  cout<<"Name: "<<this->name<<endl;
  cout<<"health "<< this->health <<endl;
  cout<<"level "<< this->level << endl;
}

int getHealth() { // by this we can access the private part of the class
    return health;
} 
char getLevel(){
  return level;
}
void setHealth(int h){ // by this we can also modify the private part of a class
// if(name == "moye moye"){ // it just works as a password that only in this condition it will give the health or continue otherwise not2  
    health = h;
// }
    
}
void setLevel(char l){
  level = l;
}
void setName(char name[]){
  strcpy(this->name, name);
}






};

int main ()
{
//   hero h1;
//   cout<<"When health is private health is "<<h1.getHealth()<<endl;
//   h1.setHealth(50);
//   cout<<"After set the health while it is private health is "<<h1.getHealth()<<endl;

// //   h1.health = 70;
//   h1.level = 'A';
//   h1.name[10] ;
//   cout<<"size: "<< sizeof(h1)<<endl;  
//   cout<<"Name is "<<h1.name<<", Health is ";
// //   cout<<h1.health;
//   cout<<", Level is "<<h1.level<<endl;

//   // if i want to make my object dynamically then
//   hero *h2 = new hero; // it's memory is stored in heap
//   h2->level = 'B';
//   h2->setHealth(40);
//   cout<<"Level of h2 "<<(*h2).level<<endl;
//   cout<<"Health of h2 "<<(*h2).getHealth()<<endl;
//   // another way to write above two lines is below
//   cout<<"Level of h2 "<<h2->level<<endl;
//   cout<<"Health of h2 "<<h2->getHealth()<<endl;

cout<<"Hi"<<endl;
hero salman; // only by writing this we call constructor as we call function earlier
cout<<"Address of salman "<<&salman<<endl;
cout<<"Hello"<<endl;
hero* shahrukh = new hero;

hero aamir(10);
cout<<"Address of aamir "<<&aamir<<endl;

hero akshay(60,'B');
hero hritik(akshay); // it means that the properties of akshay is copied in hritik
// cout<<"health of akshay is "<<akshay.health<<endl;

hero h1;
h1.setHealth(12);
h1.setLevel('D');
char name[7] = "Nauman";
h1.setName(name);

h1.print();
hero h2(h1);
h2.print();

h1.name[0] = 'L';
h1.print();
h2.print();

   return 0;
}