# include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    // constructor
    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
    ~node(){
        int val = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data "<<val<<endl;
    }
};

// traversing a linked list
void print(node* &head){
    node* temp = head;
    while (temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int getLength(node* head){
    int len = 0;
     node* temp = head;
    while (temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead (node* &head, int d){
    node* temp = new node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;       
}

// void insertAtTailWithoutTail (node* &head, int d){
//     node* tail = new node(d);
//     node* temp = head;
//     while(temp -> next != NULL){
//         temp = temp -> next; 
//     }
//     temp -> next = tail;
//     tail -> prev = temp;

//     cout<<"head is --> "<<head -> data<<endl;
//     cout<<"tail is --> "<<tail -> data<<endl;  
// }

void insertAtTail(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}


void insertAtPosition(node* &head, node* &tail, int p, int d){
    node* temp = new node(d);
    node* back = head;
    node* fore = tail;
    int forecnt = 1;
    int length = getLength(head);
    int backcnt = length;
    while(forecnt < p-1){
        back = back -> next;
        forecnt++;
    }
    while(backcnt > p+1){
        fore = fore -> prev;
        backcnt--;
    }
    temp -> next = back -> next; 
    fore -> prev = temp; // to do it without uding head we can also write [back -> next -> prev] in place of [fore -> prev] and manage other things according to this
    temp -> prev = fore -> prev;
    back -> next = temp;
    if(p >= getLength(head)){ // we can also call insertAtTail function in starting and return(no need of further functioning)
        tail = temp;
    }
    if(p == 1){ // we can also call insertAtHead function in starting and return(no need of further functioning)
        head = temp;
    }
}

// void deleteNode(node* &head, node* &tail, int p) { // don't know why it is not working perfectly
//     if(p==1){
//         node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp -> next;
//         temp -> next = NULL;
//         delete temp;
//         return; 
//     }

//     if(p==getLength(head)){
//         node* temp = tail;
//         tail = tail -> prev;
//         temp -> prev = NULL;
//         delete temp;
//         return; 
//     }

//     node* temp = head ;
//     int cnt = 1;
//     while (cnt<p){
//         temp = temp -> next;
//         cnt++;
//     }
    
//     temp -> next -> prev = temp -> prev;
//     temp -> prev -> next = temp -> next;
//     temp -> prev = NULL;
//     temp -> next = NULL;

//     delete temp;

// }

void deleteNode(node* &head, node* &tail, int p){

    // deleting first or start node
    if(p == 1){
        node* temp = head;
        head = head -> next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }

    else {
        // deleting any middle node or last node 
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < p) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(p == getLength(head)){
            tail = prev;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}



int main ()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1; // if not want to use it comment out (insertAtTailWithoutTail) function.
    cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);

    insertAtHead(head, 9);
    cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 


    insertAtTail(tail, 11);
    cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
    cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;

    insertAtTail(tail, 12);
    cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
    cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;

    insertAtTail(tail, 13);
    cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
    cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 

    insertAtTail(tail, 14);
    cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
    cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 


    insertAtHead(head, 8);
     cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 

    insertAtHead(head, 7);
     cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 

    insertAtHead(head, 6);
     cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
    cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 

    
    insertAtTail(tail, 15);
     cout<<"Length is equal to "<<getLength(head)<<endl;
    print(head);
    cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;  

     insertAtPosition(head, tail, 4, 332);
     cout<<"Length is equal to "<<getLength(head)<<endl;
     print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;  

      insertAtPosition(head, tail, 8, 32);
     cout<<"Length is equal to "<<getLength(head)<<endl;
     print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;  

      insertAtPosition(head, tail, 13, 420);
     cout<<"Length is equal to "<<getLength(head)<<endl;
     print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;  

    insertAtPosition(head, tail, 1,0);
     cout<<"Length is equal to "<<getLength(head)<<endl;
     print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl;  

     deleteNode(head, tail, 5);
     print(head);
     cout<<"head is --> "<<head -> data<<endl;
     cout<<"tail is --> "<<tail -> data<<endl; 


 return 0;
}