//  *#*#*#*#*#*#*#*#*#*#  ASSOCIATIVE CONTAINERS  #*#*#*#*#*#*#*#*#*#*

// 1.) ************* set *************
// set is a container which count a unique value only one time means if i push 3 five times then it read it only one time 
// time complexity is O(n)
# include <iostream>
# include <set>
// it don't contains some member functions like push(), pop()
// implimantation is done by bst 
// [binary search tree :-->
// 1. Every node can have maximum two subtree 
// 2. The value of left subtree is smaller than the value of node.
// 3. The value of right subtree is greater than the value of node.] 
// In set, value can't be modify after being pushed. It can only be create or delete.
// Set return values in sorted form, but slower than unordered set.
// Unordered set not returns values in sorted form but faster than ordered set.
using namespace std;
int main ()
{
    set<int> s;
    s.insert(3);  
    s.insert(2);  
    s.insert(6);  
    s.insert(3);  
    s.insert(6);  
    s.insert(8);  
    s.insert(3);  
    s.insert(0);  
    s.insert(0);  
    s.insert(0);  
    s.insert(0); 
    s.insert(43);  
    s.insert(36);  
    s.insert(1);
    for(auto i:s){
        // we can also use int in place of auto , auto just automates it on its functioning but working is same if we write int 
        // it also use range based iterators so loop can run by i:s.
        cout<<i<<" ";
        // we can clearly see that we insert many values more than one time but set read them only ones. 
    } 
    cout<<endl; 
    s.erase(s.begin());
    // it erase one element from begin
    for(int i:s){
        cout<<i<<" ";
    }
cout<<endl;
set<int>::iterator it = s.begin();
// in above line we declare an iterator and fix it on the begin of set (s)
it++;
      // here we increse iterator , so it aheads one time goes to second element
      // to increase this (it) or any other iterator more than one time than we have to go to advance function
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"3 is present or not --> "<<s.count(3)<<endl;
    cout<<"0 is present or not --> "<<s.count(0)<<endl;
    cout<<"-5 is present or not --> "<<s.count(-5)<<endl;
    cout<<"5 is present or not --> "<<s.count(5)<<endl;
    // count tells that this partcular number is present in set or not.
    set<int>:: iterator itr = s.find(8);
    for(auto i= itr; i!=s.end();i++){
        // here we can't use int i because it can't automate.
        cout<<*i<<" ";
    }cout<<endl;
    

 return 0;
}


// 2.)***************** map ********************
# include <iostream>
# include <map>
// map use one to one and many to one relationship such that a key can point to a unique value and all keys are also unique
// two keys can point to same value but not vice versa and these two keys are also different from each other means unique
using namespace std;
int main ()
{
    map<int,string> m;
    m[1]="nauman";
    m[2]="rehman";
    m[3]="mansoori";
    m[3]="nauman";
    m[4]="nauman";
    m[5]="mansoori";
    
 return 0;
}
