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
    tail -> next = NULL;
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

void removeDuplicate(node* &head){
    node* temp = head;
    while(temp != NULL){
        if(temp -> next == temp){
            temp -> prev -> next = temp -> next;
            temp -> next = NULL;
            temp = temp -> ;
            delete temp -> next;
        }
        temp = temp -> next;
    }
}

int main ()
{
    node* node1 = new node(0);
    node* head = node1;
    node* tail = node1;

    print(head);

    insertNode(tail, 11);
    print(head);
    insertNode(tail, 12);
    print(head);
    insertNode(tail, 12);
    print(head);
    insertNode(tail, 12);
    print(head);
    insertNode(tail, 13);
    print(head);
    insertNode(tail, 13);
    print(head);
    insertNode(tail, 13);
    print(head);
    insertNode(tail, 14);
    print(head);
    insertNode(tail, 15);
    print(head);
    insertNode(tail, 16);
    print(head);
    insertNode(tail, 17);
    print(head);
    insertNode(tail, 18);
    print(head);


    


 return 0;
}