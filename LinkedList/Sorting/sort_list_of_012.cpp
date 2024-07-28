#include <iostream>
using namespace std;
struct node {
    int val;
    node* next;
    node(int x) : val(x), next(nullptr) {}
};


// Helper function to print the list
void printList(node* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
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

node* sortList(node* head) {
    node* zerohead = new node(-1);
    node* onehead = new node(-1);
    node* twohead = new node(-1);
    node* zerotail = zerohead;
    node* onetail = onehead;
    node* twotail = twohead;
    node* temp = head;

    while (temp != nullptr) {
        if (temp->val == 0) {
            node* newNode = new node(0);
            zerotail->next = newNode;
            zerotail = newNode;
        } else if (temp->val == 1) {
            node* newNode = new node(1);
            onetail->next = newNode;
            onetail = newNode;
        } else if (temp->val == 2) {
            node* newNode = new node(2);
            twotail->next = newNode;
            twotail = newNode;
        }
        temp = temp->next;
    }

    // Connect the lists together
    if (onehead->next != nullptr) {
        zerotail->next = onehead->next;
    } else {
        zerotail->next = twohead->next;
    }
    onetail->next = twohead->next;
    twotail->next = nullptr;

    // Get the new head
    node* sortedHead = zerohead->next;

    // Delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return sortedHead;
}
int main() {
    // Test case 1: Unsorted list
    int arr1[] = {0, 2, 1, 0};
    node* head1 = createList(arr1, 4);
    cout << "Original: ";
    printList(head1);
    head1 = sortList(head1);
    cout << "Sorted: ";
    printList(head1);

    // Test case 2: Already sorted list
    int arr2[] = {1, 2, 0, 2, 0};
    node* head2 = createList(arr2, 5);
    cout << "Original: ";
    printList(head2);
    head2 = sortList(head2);
    cout << "Sorted: ";
    printList(head2);

    // Test case 3: Reverse sorted list
    int arr3[] = {1, 0, 2, 1, 1};
    node* head3 = createList(arr3, 5);
    cout << "Original: ";
    printList(head3);
    head3 = sortList(head3);
    cout << "Sorted: ";
    printList(head3);

    // Test case 4: List with duplicate values
    int arr4[] = {0, 1, 1, 2, 0, 1, 2, 0, 1, 2, 0};
    node* head4 = createList(arr4, 11);
    cout << "Original: ";
    printList(head4);
    head4 = sortList(head4);
    cout << "Sorted: ";
    printList(head4);

    return 0;
}
