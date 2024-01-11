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
