# include <iostream>
using namespace std;

int climb(int n){ // ques --> we have to go to nth stair from 0th stair and we can only climb 1 stair or 2 stair at a time
    if(n==0){ // solution --> just suppose one case and apply recursion
        return 1; // how we do reach at nth stair --> 1.) by climb 1 stair [from (n-1)th stair] , 2.) by climb 2 stairs [from (n-2)th stair]
    }
    if(n==1){
        return 1;
    }

    int ans = climb(n-1) + climb(n-2);
    return ans;
}

int findFibbo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ans = findFibbo(n-1) + findFibbo(n-2);
    return ans;
    

}

void reachHome(int source , int des){
    cout<<"Source "<<source << " ,Destination "<<des<<endl;
    if(source==des){
        cout<<"Pahunch gaya";
        return;
    }
    reachHome(source+1,des);
    
}

void numberToWord(string arr[] , int n){
    if(n==0){
        return;
    }
    numberToWord(arr,n/10);
    cout<<arr[n%10]<<" "; // if i write this line above the upper one then number is written from ones side --> ones > tens > hundred and so on
    // but in the case as we write code we take output value while returning 
}

int main ()
{
    // int des = 10;
    // int source = 1;
    // cout<<endl;
    // reachHome(source, des);
    // cout<<endl;
    // int n;
    // cin>>n;
    // cout<<findFibbo(n)<<endl;
    // cout<<climb(n);

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int i;
    cout<<"Enter the number ";
    cin>>i;
    numberToWord(arr,i);

 return 0;
}

// leet code question
// Count ways to reach the N-th stair
// you have been given a number of stairs. Initially, you are at he 0th stair, and you need to reach the Nth stair. Each time you can either
// climb one step or two step. You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.
#include <iostream>
using namespace std;
int fact(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    int total = n * fact(n-1);
    return total;
}
int ans = 0;
int count(int n, int a=0){
    if(a > n){
        return 0;
    }
    ans = ans + fact(n)/(fact(a)*fact(n-a));
    count(n-1,a+1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    int final = count(n);
    cout<<final;
    return 0;
}
// another method
#include <iostream>
using namespace std;

int count(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int ans = count(n-1) + count(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    int ans = count(n);
    cout<<ans;
    return 0;
}
