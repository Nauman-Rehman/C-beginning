# include <iostream>
# include <vector>
using namespace std;

int rotate(vector<int>& num,int k){
    vector<int> temp(num.size());
    for(int i=0;i<num.size();i++){
        temp[(i+k)%num.size()] = num[i];
    }
    num = temp;
}
int main ()
{
    int k;
    vector<int> num = {1,2,3,4,5,6,7,8,9,10};
    // num.push_back(1);
    // num.push_back(2);
    // num.push_back(3);
    // num.push_back(4);
    // num.push_back(5);
    // num.push_back(6);
    // num.push_back(7);
    // num.push_back(8);
    // num.push_back(9);
    // num.push_back(10);
    
    cout<<"Enter the number from which you want to collectively rotate this array ";
    cin>>k;
    rotate(num,k);
    cout<<"After rotation ";
    for(int i:num){
        cout<<i<<" ";
    }
    
 return 0;
}

// yeh lecture complete nhi kiya abhi 