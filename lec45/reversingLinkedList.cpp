# include <iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

int getLength(node* &head, node* &tail){
    node* temp = head;
    int cnt = 1;
    while(temp != tail){
        temp = temp -> next;
        cnt++;
    }
    return cnt;
}

void insertNode(node* &tail, int d){
    node* temp = new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    temp -> next = NULL;
    tail = temp;
    tail -> next = NULL;
return;
}

void print (node* &head){
    if(head == NULL){
        cout<<"Your Linked List is empty"<<endl;
    }
    else{
        node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
}

int printRecur(node* &temp){ // reversing and printing by recursion
    //  if(temp == NULL){
    //     cout<<"Your Linked List is empty"<<endl;
    //     return -1;
    // }
    if(temp -> next == NULL){
        //   temp -> prev = NULL; 
        return temp -> data;
    }
        node* newtemp = temp -> next;
           cout<< printRecur(newtemp)<<" ";
    temp -> next -> next = temp;
    temp -> next = NULL;
    return newtemp -> next -> data;
        
        
        
    }


void reverseList(node* &head, node* &tail){

    if(head == NULL){
        cout<<"There is no node in your List"<<endl;
        return;
    }
    node* temp = tail;
    while(temp -> prev != NULL)
   { 
    temp -> next = temp -> prev;
    temp = temp -> prev;
    temp -> next = NULL;
   }
    head = tail;
    tail = temp;

}
int findMid(node* &head, node* &tail, int n){
    node* temp = head;
    int cnt =1;
    while(cnt != n/2){
        temp = temp -> next;
        cnt++;
    }
    return temp -> next -> data;
}



int main ()
{
    node* node1 = new node(0);
    node* head = node1;
    node* tail = node1;
    print(head);
     reverseList(head, tail);
    print(head);

    insertNode(tail, 11);
    print(head);
    insertNode(tail, 12);
    print(head);
    insertNode(tail, 13);
    print(head);
    insertNode(tail, 14);
    print(head);
    insertNode(tail, 15);
    print(head);
    insertNode(tail, 16);
    print(head);
    insertNode(tail, 17);
    print(head);
    // insertNode(tail, 18);
    // print(head);
    int mid = getLength(head, tail) ;
    cout<<mid<<endl;

    cout<<findMid(head, tail, mid)<<endl;

    reverseList(head, tail);
    print(head);
    
    cout<<printRecur(head);

 return 0;
}