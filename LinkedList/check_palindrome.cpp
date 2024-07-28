#include <vector>
class Solution {
public:

    void makeVector(ListNode* head, vector<int> &arr, int &cnt){
        while(head != NULL){
            arr.push_back(head -> val);
            head = head -> next;
            cnt++;
        }
        return;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return true;
        }
        
        bool chk = true;
        int size = 0;
        vector<int> arr;
        makeVector(head, arr, size);
        for(int i = 0 ; i < size/2 ; i++){
            if(arr[i] != arr[size-i-1]){
                chk = false;
                break;
            }
        }
        return chk;
    }
};
