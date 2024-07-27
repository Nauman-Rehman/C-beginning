// swaping by giving their position in the as argument in swap function
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
        
void swap(node* &head, int left, int right) {
        if(left == right){
            return ;
        }
        else if(left == right -1){
            node* temp = NULL;
            node* temp1 = head;
            node* temp2 = head;
            int i = 1;
            while(i < left){
                temp = temp1;
                temp1 = temp1 -> next;
                temp2 = temp2 -> next;
                i++;
            }
            temp2 = temp2 -> next;
            if(temp == NULL){
                head = head -> next;
                temp = temp2 -> next;
                temp2 -> next = temp1;
                temp1 -> next = temp;

                return ;
            }
            else{
                temp -> next = temp2 -> next;
                temp2 -> next = temp1;
                temp1 -> next = temp -> next;
                temp -> next = temp2;
                return ;
            }
        }

        else {
            node* prev1 = NULL;
            node* prev2 = NULL;
            node* temp1 = head;
            node* temp2 = head;
            int i = 1;
            while(i < left){
                prev1 = temp1;
                prev2 = temp2;
                temp1 = temp1 -> next;
                temp2 = temp2 -> next;
                i++;
            }
            while(i<right){
                prev2 = temp2;
                temp2 = temp2 -> next;
                i++;
            }
            if(prev1 == NULL){
                head = temp2;
                prev1 = temp2 -> next;
                temp2 -> next = temp1 -> next;
                prev2 -> next = temp1;
                temp1 -> next = prev1;
                return ;
            }
            else{
                prev1 -> next = temp2 -> next;
                temp2 -> next = temp1 -> next;
                temp1 -> next = prev1 -> next;
                prev2 -> next = temp1;
                prev1 -> next = temp2;
                return ;
            }
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
    swap(head, 4,5);
    print(head);
 return 0;
}
