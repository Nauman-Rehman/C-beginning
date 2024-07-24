// make power set of given set when the elements in a set is integer
# include <iostream>
# include <vector>
using namespace std;
void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(nums, output, index+1, ans);
    
    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}

vector<vector<int>> subset(vector<int>& nums){
    
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main(){
   vector<int> vect = {1,2,3};
   vector<vector<int>> ans = subset(vect);
    for (int i = 0; i < ans.size(); i++)  {
        cout <<"[" ;
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << ", "; 
        }
        cout << "]" << endl; 
     }
   return 0;
}


// make the power set of the given string using its characters
# include <iostream>
# include <vector>
# include <string.h>
using namespace std;
void solve(string name, string output, int index, vector<string>& ans){
    if(index >= name.size()){
        ans.push_back(output);
        return;
    }
    // exclude
    solve(name, output, index+1, ans);
    
    // include
    char element = name[index];
    output.push_back(element);
    solve(name, output, index+1, ans);
}

vector<string> sequence(string name){
    
    vector<string> ans;
    string output;
    int index = 0;
    solve(name, output, index, ans);
    return ans;
}

int main(){
    string name = "abc";
    vector<string> ans = sequence(name);
    for(string i : ans) cout<<i<<", ";
  return 0;
}
