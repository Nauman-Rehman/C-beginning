// it takes two numbers left and right and reverse only that part of the linked list
// left and right are 2 positions in the list where left <= right
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
        
void make(node* prev2, node* temp1, node* last){
        if(prev2 == last){
            return;
        }
        node* temp = prev2 -> next;
        prev2 -> next = temp1;
        temp1 = prev2;
        prev2 = temp;
        make(prev2, temp1, last);
        return;
    }

    node* reverseBetween(node* &head, int left, int right) {
        if(head == NULL || head -> next == NULL || left == right){
            return head;
        }
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
        while(i < right){
            prev2 = temp2;
            temp2 = temp2 -> next;
            i++;
        }
        if(prev1 == NULL){
            prev2 = temp1 -> next;
            temp1 -> next = temp2 -> next;
            make(prev2, temp1, temp1 -> next);
            head = temp2;
            return head;
        }
        else{
            prev1 -> next = temp2;
            prev2 = temp1 -> next;
            temp1 -> next = temp2 -> next;
            make(prev2, temp1, temp1 -> next);
            return head;
        }
    }

int main ()
{
    node* head = NULL;
    node* tail = NULL;
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
    reverseBetween(head, 1,2);
    print(head);
 return 0;
}
