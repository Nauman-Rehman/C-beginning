// it only reverse a perfect group if goup is not completed then it remains it same for example
// {1,2,3,4,5,6,7,8}, k = 3, output --> {3,2,1,6,5,4,7,8}
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
node* reverseKGroup(node* head, int k) {
        if(head == NULL){
            return NULL;
        }
        node* next = NULL;
        node* curr = head;
        node* prev = NULL;
        int cnt = 0;
        while(curr != NULL && cnt < k){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
        if(cnt < k){
            while(cnt > 0){
                cnt--;
                curr = prev;
                prev = prev -> next;
                curr -> next = next;
                next = curr;
            }
            return curr;
        }
        if(curr != NULL){
            head -> next = reverseKGroup(curr, k);
        }
        
        return prev;
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
        insertNode(head, tail, 25);
    print(head);
        insertNode(head, tail, 17);
    print(head);
        insertNode(head, tail, 38);
    print(head);
        insertNode(head, tail, 15);
    print(head);
    node* reversed_in_k = reverseKGroup(head, 2);
    print(reversed_in_k);    
    print(head);
 return 0;
}
