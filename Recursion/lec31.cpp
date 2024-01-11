// when a function call itself or when a function let say A calls another function B and B again calls A then this type of this are called Recursion
// Another definition of recursion is that when a big operation is done by the use of it's small variant
// ex --> 5! = 5 * 4! , here 5! is a big operation done by it's small variant 4!
// there are 3 things in recursion 1.) base case , 2.) recursive part , 3.) processing (means any kind of operations)
// function in which recursive relation comes at last is called [tail recursion] 
// function in which recursive relation comes before processing is called [head recursion]
// base case always comes first
// processing is optional but base case and recursion is necessary

# include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){ // this is a base case which is necessary in recursion to tell program where to stop 
    // if we don't write base case then it call function again and again untill the stack gets full
        return 1;
    }
    int choti = factorial(n-1);
    int badi = n*choti;

    return badi;
}

int power(int m, int n){
    if(n==0){
        return 1;
    }

    // int choti = power(m,n-1);
    // int badi = m * choti;
    // return badi;
    // these 3 lines (int choti, int badi, return) can be replaced by a single line -->(return m*power(m,n-1))
    return m*power(m,n-1);
}

int reverseCount(int n){

    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    reverseCount(n-1);
}

int count(int n, int m=1){
    if(m>n){
        return 0;
    }
    cout<<m<<" ";
    count(n,m+1);
}

// another method of straight count just by doing small change in reverseCount and without using any extra variable
void straightCount(int n){

    if(n==0){
        return;
    }
    reverseCount(n-1);
    cout<<n<<" ";
    // par mere to ho hi nhi raha
}

int main ()
{
    // int n;
    // cout<<"Enter the number factorial of which you want to find out ";
    // cin>>n;
    // cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    // int m;
    // cout<<"Enter the number you want to find out the value when it's power is raised by "<<n<<" --> ";
    // cin >> m;
    // cout<<"The value of "<<m<<" raise to power "<<n<<" is "<<power(m,n);

    int n;
    cout<<"Enter the number from which you want to print reverse counting to 0 ";
    cin>>n;
    cout<<"Reverse counting is ";
    reverseCount(n);
    cout<<endl<<"Straight count ";
    count(n);
    cout<<endl<<"Straight counting by small change in reverse count ";
    straightCount(n);
 return 0;
}
