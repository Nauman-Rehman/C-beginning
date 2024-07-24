# include <iostream>
# include <vector>
# include <string.h>
using namespace std;


    void give(string digits, vector<string>& ans, int index, string output, string map[]){
        
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        int i = digits[index] - '0';
        string value = map[i];
        
        for(int i = 0; i< value.size(); i++){
            output.push_back(value[i]);
            give(digits, ans, index+1, output, map);
            output.pop_back();
        }
        return;
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0){
            return ans;
        }
        int index = 0;
        string output;
        string map[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        give(digits, ans, index, output, map);
        return ans;
    }

int main(){
    string digits ;
    cin>>digits;
    vector<string> ans = letterCombinations(digits);
    for(string i: ans) cout<<i<<", ";
  return 0;
}
