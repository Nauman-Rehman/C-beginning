// this is the most basic singly linked list in which there is only one way to insert a node in the list from the head side. 
// (means every new node will become head on addition and we can't insert any node from middle of the list.
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

 void insertNode(node* &head, int data){
            if(head == NULL){
                node* newNode = new node(data);
                head = newNode;
            }
            else{
                node* newNode = new node(data);
                newNode -> next = head;
                head = newNode;
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
