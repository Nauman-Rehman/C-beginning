// this is something advanced singly linked list in which we can insert new node at any position.
// means -> if we want to add at new node at first position just give 1 for position in function call of insertNode,
// if anyone wants to add new node at last then just give any value greater than the last position or leave blank position part in function call
// (example -- lets suppose the size of list is 4 means tail is at 4th position then in order to add the new node at 5th position give value greater or equal to 5 to place new node at last)
// if anyone wants to add new node in between or middle of the list then just give the value of that position in position part of function call
// (when we add new node in middle let's say at 2nd position, then the node which is at 2nd position before, will go at 3rd position, 3rd one goes to 4th position and so on.
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

 void insertNode(node* &head, node* &tail,int &count, int data, int position = 0){
            count++;
            if(head == NULL){
                node* newNode = new node(data);
                head = newNode;
                tail = newNode;
            }
            else{
                node* newNode = new node(data);
                if(position == 0 || position >= count){
                    tail -> next = newNode;
                    tail = newNode;
                }
                else if(position == 1){
                    newNode -> next = head;
                    head = newNode;
                }
                else{
                    int i = 2;
                    node* temp = head;
                    while(i < position){
                        temp = temp -> next;
                    }
                    newNode -> next = temp -> next;
                    temp -> next = newNode;
                }
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
    int count = 0;
    // print(tail);
    insertNode(head, tail, count, 2);
    print(head);
    insertNode(head, tail, count, 3);
    print(head);
     insertNode(head, tail, count, 4, 2);
    print(head);
     insertNode(head, tail, count, 8, 1);
    print(head);
     insertNode(head, tail, count, 22, 5);
    print(head);
     insertNode(head, tail, count, 10, 8);
    print(head);
     insertNode(head, tail, count, 35, 1);
    print(head);
 return 0;
}
