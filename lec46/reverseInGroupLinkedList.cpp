# include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

int getLength(node* &head, node* &tail){
    node* temp = head;
    int cnt = 1;
    while(temp != tail){
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

void insertNode(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    temp -> next = NULL;
    tail = temp;
return;
}

void print (node* &head){
    if(head == NULL){
        cout<<"Your Linked List is empty"<<endl;
    }
    else{
        node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
}

// void reverseInGroup(node* &constant, node* &head, int k){

//     // base case
//    if(head -> next == NULL){
//     return;
//    }
//    int cnt = 1;
//    node* temp2 = head;
//     while(cnt != k){
//         head -> prev = head -> next;
//         head = head -> next;
//         cnt++;
//     }
//     temp2 -> next = head;
//     reverseInGroup(constant, head,k);
//     head = constant;
//     return;
// }

node* reverseKGroup (node* head, int k){ // time complexity --> O(n)
    // base case
    if(head == NULL){
        return NULL;
    }
    //step 1: reverse first k nodes
    node* next = NULL;
    node* curr = head;
    node* prev = NULL;
    int cnt = 0;

    while (curr != NULL && cnt < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    // step 2: recursion dekhlega aage ka
    if(next != NULL){
        head -> next = reverseKGroup(next,k);
    }

    // step 3: return head of reversed list
    return prev;
}

bool circularOrNot(node* &head){ // finding out that our linked list is circular or not
    node* temp = head -> next;
    while(temp != head  &&  temp != NULL){
        temp = temp -> next;
    }
    if(temp == head){
        return 1;
    }
    else { return 0;}
}


int main ()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    insertNode( tail, 11);
    print(head);
    insertNode( tail, 12);
    print(head);
    insertNode( tail, 13);
    print(head);
    insertNode( tail, 14);
    print(head);
    insertNode( tail, 15);
    print(head);
    insertNode( tail, 16);
    print(head);
    insertNode( tail, 17);
    print(head);
    insertNode( tail, 18);
    print(head);
    insertNode( tail, 19);
    print(head);
    insertNode( tail, 20);
    print(head);
    cout<<circularOrNot(head)<<endl;
    // reverseInGroup(head, head, 3);
    node* returnFromReverseKGroup = reverseKGroup(head,3);
    print(returnFromReverseKGroup);
    // reverseKGroup(head, 3);

    return 0;
}