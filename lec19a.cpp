// // stl = standard template library


//  *#*#*#*#*#*#*#**#*#*#*#*#  SEQUENCE CONTAINERS  #*#*#*#*#*#*#*#*#*#*#*#*

// // 1.) ************ array ************
// # include <iostream>
// # include <array>
// using namespace std;
// int main ()
// {
//     int basic[3] = {1,2,3};
//     array<int,4> a = {1,2,3,4};
//     int size = a.size();
//      // size means how many elements are there in array currently (free spaces are cover by garbage value they are not blank)
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at 2nd Index "<<a.at(2)<<endl;
//      // at() means what is the value at this index
//     cout<<"Empty or not "<<a.empty()<<endl;
//      // empty() returns 0 is array is not empty and 1 when array is empty
//     cout<<"First Element "<<a.front()<<endl;
//      // front() gives the first value of array (value at zero index)
//     cout<<"Last Element "<<a.back()<<endl;
//      // last() gives the last value of array (value at n-1 index) , (where n is the size of an)
//  return 0;
// }

// // 2.) ************* vectors *************
// # include <iostream>
// # include <vector>
// // vector is just like an array but it can increase it's size 
// // hota kya hai na ki jese hi apn vector me uske size ke aage vale index me value dalte hai to 1 naya vector ban jata hai jiski size 
// // pehle vale se double hoti hai fir purana vala naye vale me copy hokar khatam ho jata hai
// // isme push or pop sirf back (top most) element se hi kr skte hai
// using namespace std;

// int main ()
// {
//     vector<int> a(5,1);
//     // in the above vector (a) is the name of vector, 5 is the size, 1 is the initial value in all 5 indices
//     // if we do not initialize with any number then by default all numbers will initialize with 0
//     cout<<"Print a"<<endl;
//     for(int i:a){
//     // vector use range based iterators so we can write for loop in this way
//         cout<<a[i]<<" ";
//     } cout<<endl;

//      vector<int> b(a);
//     // here i just made another vector named (b) and copied all elements of a in b
//      for(int i:b){
//         cout<<b[i]<<" ";
//     } cout<<endl;

//    vector<int> v;
//    // this is the vector named (v) but not given any size
//     cout<<"Capacity--> "<<v.capacity()<<endl;
//     // capacity() is different from size. It means that how much memory is given to the vector
//     v.push_back(1);
//     // back means top most index
//     // 01h index is filled by 1 --> total capacity = 1, size = (filled) = 1
//     cout<<"Capacity--> "<<v.capacity()<<endl;

//     cout<<"Size--> "<<v.size()<<endl;

//      v.push_back(2); 
//      // back means top most index
//     // 1st index is filled by 2 --> total capacity (get doubled) = 2, size = (filled) = 2
//     cout<<"Capacity--> "<<v.capacity()<<endl;
//     cout<<"Size--> "<<v.size()<<endl;

//     v.push_back(3); 
//     // back means top most index
//     // 2nd index is filled by 3 --> total capacity (get doubled) = 4, size = (filled) = 3
//     cout<<"Capacity--> "<<v.capacity()<<endl;
//     cout<<"Size--> "<<v.size()<<endl;

//      v.push_back(4); 
//      // back means top most index
//     // 3rd index is filled by 4 --> still total capacity = 4, size = (filled) = 4
//      cout<<"Capacity--> "<<v.capacity()<<endl;
//     cout<<"Size--> "<<v.size()<<endl;

//      v.push_back(5); 
//      // back means top most index
//     // 4th index is filled by 5 --> now going from 4 to 5 it get doubled --> total capacity = 8, size = (filled) = 5
//     cout<<"Capacity--> "<<v.capacity()<<endl;
//     cout<<"Size--> "<<v.size()<<endl;

//     cout<<"Element at 3rd index is "<<v.at(3)<<endl;

//     cout<<"First (front) Element "<<v.front()<<endl;
//     cout<<"Last (back) Element "<<v.back()<<endl;

//     cout<<"Before pop"<<endl;
//     for(int i:v){
//         // this is another way to write for loop begin from the beginning of v and till it's end
//         // means from 0 to one less then the size of v
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     // pop means to take out and back is for top most element
//     cout<<"After pop"<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"Before clear size is "<<v.size()<<endl;
//     cout<<"Before clear capacity is "<<v.capacity()<<endl;
//     v.clear();
//     // clear is use to clear the vector
//     cout<<"After clear size is "<<v.size()<<endl;
//     cout<<"after clear capacity is "<<v.capacity()<<endl;

//  return 0;


// // 3.) *********** deque ***********
// # include <iostream>
// # include <deque>
// // isme push or pop front and back dono jagah se kr sakte hai
// using namespace std;
// int main(){
//     deque<int> d = {5,6,7,8,9,10,11,22};

//     d.push_back(1);
//     d.push_front(2);
//     cout<<"Front element "<<d.front()<<endl;
//     cout<<"Back element "<<d.back()<<endl;
//     cout<<"Value at index 1 is "<<d.at(1)<<endl;
//     cout<<"Empty or not "<<d.empty()<<endl;

//     cout<<"Before pop"<<endl;
//     for(int i:d){
//     // deque also use range based iterators so we can write for loop in this way
//         cout<<i<<" ";}
//         // see here is a difference that only i represents the value at i index of deque (d) unlike vector and array where we have to write arr[i]
//         // this is because deque donot store values linearly like array and vector. It stores in unordered way.
//     cout<<endl;
//     d.pop_front();
//     cout<<"After pop front"<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//      d.pop_back();
//     cout<<"After pop back"<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"Before erase "<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"Before erase size is "<<d.size()<<endl;

//     d.erase(d.begin(),d.begin()+3);
//     // erase function is use to delete the values from deque d.begin() means start deleting from begin
//     // d.begin()+3 means delete 3 values. So it delete 3 values from starting 
//     // size will also reduce after this but capacity remains same

//     cout<<"after erase "<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     cout<<"After erase size is "<<d.size()<<endl;
//     return 0;
// }


// 4.) ************ list **************
//  it has pointers from both side (front pointer & back pointer)
// we cannot access any value in it by direct writing l.at(4) like deques, vectors and arrays
# include <iostream>
# include <list>
using namespace std;
int main ()
{
    list<int> l = {4,5,6,7,8};
    l.push_back(1);
    l.push_front(2);
    cout<<"Before erase "<<endl;
    for(int i:l){
     // list also use range based iterators so we can write for loop in this way
        cout<<i<<" ";
    }
    cout<<endl;
      l.erase(l.begin());
       cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
 return 0;
}