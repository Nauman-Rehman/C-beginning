ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode(0);
    ListNode* tail = head;
    int carry = 0;
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
    return head->next;
}
