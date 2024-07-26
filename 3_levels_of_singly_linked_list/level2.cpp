// this is another kind of singly linked list in which insertion of new node can only be occured from the tail side of the list.
// and the first node remains the head till the end, and every new node which add up to the list, became the tail of the list.
// there is only 1 head and 1 tail in the list (the node which comes first is the head and the list and which comes at last is the tail of the list). 
# include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
    
    public:    
        node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

 void insertNode(node* &head, node* &tail, int data){
            if(head == NULL){
                node* newNode = new node(data);
                head = newNode;
                tail = newNode;
            }
            else{
                node* newNode = new node(data);
                tail -> next = newNode;
                tail = newNode;
            }
        }
        void print(node* head){
            if(head == NULL){
                cout<<"list is empty, nothing to print :-(";
            }
            else{
                node* temp = head;
                do{
                    cout << temp->data << " ";
                    temp = temp->next;
                }
                while(temp != NULL);
                cout<<endl;
            }
        }

int main ()
{
    node* head = NULL;
    node* tail = NULL;
    // print(tail);
    insertNode(head, tail, 2);
    print(head);
    insertNode(head, tail, 3);
    print(head);
     insertNode(head, tail, 4);
    print(head);
     insertNode(head, tail, 8);
    print(head);
     insertNode(head, tail, 22);
    print(head);
     insertNode(head, tail, 10);
    print(head);
     insertNode(head, tail, 35);
    print(head);
 return 0;
}
