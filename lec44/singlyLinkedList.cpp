# include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    
    // constructor
    node(int data) { // here 10 comes in data
        this -> data = data; // declaring data of node1 = 10
        this -> next = NULL; // declaring next of node1 = NULL
    }

    ~node(){// no need of this
        int value = this -> data;
        // memory freed
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertAtHead (node* &head, int d){ // head is a pointer node with data = 10 and next = 0 and d = 12 

    //new node create
    node* temp = new node(d); // new pointer node created (temp) and put 12 in it
    temp -> next = head; // next of temp is now pointing to head which had data = 10 , next = 0
    head = temp; // in the above line head is pointed by next of temp so head is free, we can take it from next of temp so now we put temp into head to do further insertion

}

void insertAtTail (node* &tail, int d){ // by this function we can print in sequence as we inserting. By this head remains equal to 10 and inserting is going on and by using of new pointer tail and print function works as same as doing without this function
    // now node create
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtMid (node* &tail, node* &head, int p, int d) { 
    if(p == 1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while (cnt < p-1){
        temp = temp-> next ;
        cnt++;
    }

    // inserting at last position
if(temp -> next == NULL){
    insertAtTail(tail,d);
    return;
}

    // creating a node for d
    node* nodeToInsert = new node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(node* &head){ // original value comes
    node* temp = head; // data which is in head = 10 is now pointing by temp

    while(temp != NULL){
        cout<< temp -> data << " "; // printing data of temp = 10 
        temp = temp -> next; // now temp is pointing to next which is null
    }
    cout<<endl;
}

void deleteNode(node* &tail, node* &head, int p){

    // deleting first or start node
    if(p == 1){
        node* temp = head;
        head = head -> next;
        // memory free of start node
        temp -> next = NULL;
        delete temp;
    }
   else{
    // deleting any middle node or last node 
    node* curr = head;
    node* prev = NULL;
    int cnt = 1;
    while(cnt < p){
        prev = curr;
        curr = curr -> next;
        cnt++;
    }
    if(prev -> next == tail){ // to update tail if we are deleting last node
        tail = prev;
    }
    prev -> next = curr -> next;
    curr -> next = NULL;
    
    delete curr;
   }
}

int main ()
{
    // node* node1 = new node();
    node* node1 = new node(10); // new pointer made (node1) and go to function (node)
    cout<< node1->data <<endl; // printing 10
    cout<< node1->next <<endl; // printing 0
    
    // head pointed to node1;
    node* head = node1; // now node1 is pointing by head
    node* tail = node1; // now node1 is pointing by tail
    print(head); // going to function (print)
    
    // insertAtHead(head, 12); // going to function insertAtHead
    insertAtTail(tail, 12); // going to function insertAtTail
    
    print(head);

    // insertAtHead(head, 15);
    insertAtTail(tail, 15);
    print(head);

    insertAtMid(tail, head, 3, 13);
    insertAtMid(tail, head, 2, 11);
    insertAtMid(tail, head, 6, 16);
    insertAtMid(tail, head, 1, 9);

    print(head);

    cout<<"head "<< head-> data<<endl;
    cout<<"tail "<< tail-> data<<endl;

    deleteNode(tail, head, 3);
    print(head);
    deleteNode(tail, head, 4);
    print(head);
    deleteNode(tail, head, 5);
    print(head);

     cout<<"head "<< head-> data<<endl;
    cout<<"tail "<< tail-> data<<endl;
    
 return 0;
}