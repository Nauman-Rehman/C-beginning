# include <iostream>
using namespace std;

class node {
    public:
    int data;
    // node* prev;
    node* next;

    node (int data){
        this -> data = data;
        // this -> prev = this;
        this -> next = NULL;
    }

    ~node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data "<< value << endl;
    }

};

void insertNode (node* &tail, int element, int d){
    // assuming that the element is present in the list

    // empty list
    if(tail == NULL){
        node* newNode = new node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

   else{
    // non-empty list
    //assuming that the element is present in the list

    node*curr = tail;
    while(curr->data != element){
        curr = curr -> next;
    }
    node* temp = new node(d);
    temp -> next = curr -> next;
    curr -> next = temp;
   }
}
void print (node* tail){
    node* temp = tail;
    // cout<<tail-> data;
    do {
        cout<<tail -> data << " ";
        tail = tail -> next;
    }
    while (tail != temp);
    cout<<endl;
}

void deleteNode(node* tail, int d){ // not proper work for first value or tail value which is 2 in this case
    if(tail == NULL){
        cout<<" List is already empty"<<endl;
        return;
    }
    node* prev = tail;
    node* curr = prev -> next;

    while(curr -> data != d){
        prev = curr;
        curr = curr -> next;
    }
    if(curr == tail){
        tail = prev;
    }
     prev -> next = curr -> next;
     curr -> next = NULL;
     delete curr;
}

int main ()
{
    // node* node1 = new node(10);
    // cout<< node1 -> data << endl;
    // cout<< node1 -> next << endl;

    node* tail = NULL;
    // print(tail);
    insertNode(tail, 1, 2);
    print(tail);
    insertNode(tail, 2, 3);
    print(tail);
     insertNode(tail, 3, 4);
    print(tail);
     insertNode(tail, 4, 8);
    print(tail);
     insertNode(tail, 8, 22);
    print(tail);
     insertNode(tail, 3, 10);
    print(tail);
     insertNode(tail, 22, 35);
    print(tail);
    deleteNode(tail,2);
    print(tail);
    deleteNode(tail,35);
    print(tail);
    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail,2);
    print(tail);
    deleteNode(tail, 8);
    print(tail);
 return 0;
}