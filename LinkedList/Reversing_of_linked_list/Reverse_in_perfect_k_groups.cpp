ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int cnt = 0;
        while(curr != NULL && cnt < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(cnt < k){
            while(cnt > 0){
                cnt--;
                curr = prev;
                prev = prev -> next;
                curr -> next = next;
                next = curr;
            }
            return curr;
        }
        if(curr != NULL){
            head -> next = reverseKGroup(curr, k);
        }
        
        return prev;
    }
