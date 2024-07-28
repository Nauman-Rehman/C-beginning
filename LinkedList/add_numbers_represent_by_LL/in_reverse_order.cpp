// You are given two non-empty linked lists representing two non-negative integers.
// The most significant digit comes first and each of their nodes contains a single digit.
// Add the two numbers and return the sum as a linked list.
void reverse(ListNode* &l){
        ListNode* prev = NULL;
        ListNode* curr = l;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        l = prev;
        return;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        int carry = 0;
        reverse(l1);
        reverse(l2);
        while (l1 != NULL || l2 != NULL) {
            int sum = carry;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10);
            tail->next = newNode;
            tail = newNode;
        }
        if (carry != 0) {
            ListNode* newNode = new ListNode(carry);
            tail->next = newNode;
            tail = newNode;
        }
        head = head -> next;
        reverse(head);
        return head;
    }
