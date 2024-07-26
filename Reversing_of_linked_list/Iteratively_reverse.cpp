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
            cout<<"list is empty, nothing to print :-("<<endl;
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
void reverse(node* &head, node* tail){
    node* temp = head -> next;
    head -> next = NULL;
    while(head != tail){
        node* temp2 = temp -> next;
        temp -> next = head;
        head = temp;
        temp = temp2;
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
    reverse(head, tail);
    print(head);
 return 0;
}
