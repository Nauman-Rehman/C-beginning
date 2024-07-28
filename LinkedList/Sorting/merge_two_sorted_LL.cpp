#include <iostream>
using namespace std;
struct node {
    int val;
    node* next;
    node(int x) : val(x), next(nullptr) {}
};

void printList(node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

node* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    node* head = new node(arr[0]);
    node* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new node(arr[i]);
        current = current->next;
    }
    return head;
}

node* mergesortList(node* &head1, node* head2) {
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    node* dummy = new node(-1);
    dummy->next = head1;
    node* prev = dummy;
    node* curr = head1;
    node* temp = head2;
    
    while(curr != NULL && temp != NULL){
        if(curr->val > temp->val){
            prev->next = temp;
            prev = temp;
            temp = temp->next;
            prev->next = curr;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    
    if(temp != NULL){
        prev->next = temp;
    }
    
    head1 = dummy->next;
    delete dummy;
    return head1;
}
int main() {

    int arr5[] = {0, 2, 3, 7, 9, 12};
    node* head5 = createList(arr5, 6);
    
    int arr6[] = {0, 1, 5, 7, 8, 14};
    node* head6 = createList(arr6, 6);
    
    node* merge = mergesortList(head5, head6);
    printList(merge);
    return 0;
}
