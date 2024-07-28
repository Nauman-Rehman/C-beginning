#include <iostream>

struct node {
    int val;
    node* next;
    node(int x) : val(x), next(nullptr) {}
};

node* sortList(node* &head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    node* dummy = new node(0);
    dummy->next = head;
    node* prev = dummy;
    node* curr = head;
    node* next = nullptr;
    bool swapped = false;

    while (curr && curr->next) {
        if (curr->val > curr->next->val) {
            next = curr->next;
            curr->next = next->next;
            next->next = curr;
            prev->next = next;
            prev = next;
            swapped = true;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    head = dummy->next;
    delete dummy;

    if (swapped) {
        return sortList(head);
    }
    return head;
}

// Helper function to print the list
void printList(node* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
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

int main() {
    // Test case 1: Unsorted list
    int arr1[] = {4, 2, 1, 3};
    node* head1 = createList(arr1, 4);
    std::cout << "Original: ";
    printList(head1);
    head1 = sortList(head1);
    std::cout << "Sorted: ";
    printList(head1);

    // Test case 2: Already sorted list
    int arr2[] = {1, 2, 3, 4, 5};
    node* head2 = createList(arr2, 5);
    std::cout << "Original: ";
    printList(head2);
    head2 = sortList(head2);
    std::cout << "Sorted: ";
    printList(head2);

    // Test case 3: Reverse sorted list
    int arr3[] = {5, 4, 3, 2, 1};
    node* head3 = createList(arr3, 5);
    std::cout << "Original: ";
    printList(head3);
    head3 = sortList(head3);
    std::cout << "Sorted: ";
    printList(head3);

    // Test case 4: List with duplicate values
    int arr4[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    node* head4 = createList(arr4, 11);
    std::cout << "Original: ";
    printList(head4);
    head4 = sortList(head4);
    std::cout << "Sorted: ";
    printList(head4);

    return 0;
}
