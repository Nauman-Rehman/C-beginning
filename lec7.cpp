#include <iostream>
using namespace std;

int main(){
    int digit, ans=0;
    cout<< "Enter the number: ";
    cin>>digit;
    for(int i=1;digit!=0; i++){
        ans = (ans*10) + (digit % 10);
        digit = digit/10;
    }
    cout<<"Obtained value is: "<<ans;
    return 0;
}
