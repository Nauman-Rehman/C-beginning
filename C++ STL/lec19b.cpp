//  *#*#*#*#*#*#*#*#*#  CONTAINER ADAPTORS  #*#*#*#*#*#*#*#*#*

// // 1.) ************* stack ***********
// # include <iostream>
// # include <stack>
// // stack means last in first out like a set of plate in a wedding that we took only the plate which is at top first 
// using namespace std;
// int main(){
//     stack<string> s;
//     s.push("nauman");
//     s.push("rehman");
//     s.push("mansoori");

//     cout<<"Top element "<<s.top()<<endl;
//     cout<<"Size is "<<s.size()<<endl;
//     s.pop();
//     cout<<"Top element after one time pop "<<s.top()<<endl;
//     cout<<"After one time pop Size is "<<s.size()<<endl;
//     return 0;
// }

// // 2.) ************* queue **************
// # include <iostream>
// # include <queue>
// // queue follow first in first out like a group of people standing in a line. The one which goes first will come out first.
// using namespace std;
// int main(){
//     queue<string> q;
//     q.push("nauman");
//     q.push("rehman");
//     q.push("mansoori");

//     cout<<"Front element "<<q.front()<<endl;
//     cout<<"SIze is "<<q.size()<<endl;
//     q.pop();
//     cout<<"Front element after one time pop "<<q.front()<<endl;
//     cout<<"After one time pop SIze is "<<q.size()<<endl;
//     return 0;
// }

// 3.) ************ priority queue *************
// it donot contains some member functions like front(), back(), begin(), end(), at()
# include <iostream>
# include <queue>
using namespace std;
int main ()
{
    // max heap = means when i pop any value from it is the value which is maximum among all the values in queue 
    priority_queue<int> maxpq;

    // min heap = means when i pop any value from it is the value which is minimum among all the values in queue 
    priority_queue<int,vector<int>, greater<int>> minpq;

    maxpq.push(3);
    maxpq.push(4);
    maxpq.push(2);
    maxpq.push(8);
    maxpq.push(1);
    maxpq.push(6);
    maxpq.push(4);

    minpq.push(3);
    minpq.push(4);
    minpq.push(2);
    minpq.push(8);
    minpq.push(1);
    minpq.push(6);
    minpq.push(4);

 cout<<"Size of maxpq is "<<maxpq.size()<<endl;
 cout<<"Printing all elements of maxpq ";
//  for(int i=0 ; i<maxpq.size() ; i++){
//     cout<< maxpq.top()<<" ";
//     maxpq.pop();
//  }
//  as mentioned above that this function first pop out the maximum value among all 
// and by for loop we suppose that it will print all numbers in decreasing order but it not print all numbers
// because the size of our function maxpq is also decreasing after every turn so it can not print all numbers
// the correct method is 
int n = maxpq.size();
 for(int i=0 ; i<n ; i++){
    cout<< maxpq.top()<<" ";
    maxpq.pop();
 }
cout<<endl;
cout<<"maxpq khali hai kya bhai -->";
if(maxpq.empty()==1){
   cout<<" ha kr diya tumne khali "<<endl;
}
else {cout<<"nhi abhi hai usme kuch elements "<<endl;}

 cout<<"Size of minpq is "<<minpq.size()<<endl; 
 cout<<"Printing all elements of minpq except two biggest ";
  n = minpq.size();
 for(int i=0 ; i<n-2 ; i++){
    cout<< minpq.top()<<" ";
    minpq.pop();
 }
 cout<<endl;
cout<<"minpq khali hai kya bhai--> ";
if(minpq.empty()==1){
   cout<<" ha kr diya tumne khali "<<endl;
}
else {cout<<"nhi abhi hai usme kuch elements "<<endl;}

 return 0;
}
