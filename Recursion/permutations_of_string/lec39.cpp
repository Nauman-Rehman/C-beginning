# include <iostream>
# include <vector>
# include <string.h>
using namespace std;

void make(string name, int i, string output, vector<string>& ans){
    if(i >= name.size()){
        ans.push_back(output);
        return;
    }
    for(int j = i; j<name.size(); j++){
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        output.push_back(name[i]);
        make(name, i+1, output, ans);
        output.pop_back();
    }
    return;
}
vector<string> permutations(string name){
    int i = 0;
    string output;
    vector<string> ans;
    make(name, i, output, ans);
    return ans;
}
    

int main(){
    string name ;
    cin >> name;
    vector<string> ans = permutations(name);
    for(string i: ans) cout<<i<<", ";
  return 0;
}
