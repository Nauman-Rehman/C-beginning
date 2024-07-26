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
                newNode -> next = newNode;
                head = newNode;
            }
            else{
                node* newNode = new node(data);
                newNode -> next = head -> next;
                head -> next = newNode;
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
                    cout << temp->next->data << " ";
                    temp = temp->next;
                }
                while(temp != head);
                cout<<endl;
            }
        }

int main ()
{
    node* head = NULL;
    insertNode(head, 2);
    print(head);
    insertNode(head, 3);
    print(head);
     insertNode(head, 4);
    print(head);
     insertNode(head, 8);
    print(head);
     insertNode(head, 22);
    print(head);
     insertNode(head, 10);
    print(head);
     insertNode(head, 35);
    print(head);
 return 0;
}
