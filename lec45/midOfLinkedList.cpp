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

int findMid(node* &head, node* &tail, int n){ // finding mid after calculate length of Linked List so time complexity is O(n) of getLength and O(n/2) of findMid
    node* temp = head;
    int cnt =1;
    while(cnt != n/2){
        temp = temp -> next;
        cnt++;
    }
    return temp -> next -> data;
}

int findMidFast(node* &head){ // finding mid fastly with time complexity O(n/2) : where (n) is size of Linked List and also without using this size
    node* temp1 = head;
    node* temp2 = head;

    while( temp2 != NULL ){
        temp2 = temp2 -> next;
        if(temp2 != NULL){
            temp2 = temp2 -> next;
        temp1 = temp1 -> next;
        }

    }
    return temp1 -> data;
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
    int length = getLength(head, tail) ;
    cout<<"Length of linked list is "<<length<<endl;

    cout<<"Data of middle node is "<<findMid(head, tail, length)<<endl;
    cout<<"Data of middle node is "<<findMidFast(head)<<endl;

    return 0;
}