# include <iostream>
# include <map>
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

void insertNode(node* &tail, int d){
node* temp = new node(d);
tail -> next = temp;
temp -> prev = tail;
tail = temp;
}

void print(node* &head){
    if( head == NULL){
        cout<<"Your linked list is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<< endl;
}

void makeItSubCyclic(node* &tail, int t){
    node* temp = tail;
    int cnt =1;
    while(cnt != t){
        temp = temp -> prev;
        cnt++;
    }
    tail -> next = temp;
}
// we can also check cyclic or not by FCD(floyd-cyclic-detection method) in which we make two pointer 1 is fast and 2 is slow and when they point same node then we can say it is cyclic and the way by which we can find the node from cycle is starting is explained at 29:00 of this lecture
void CheckSubCycleByMaping(node* &head){ // it tells us from which node list is going to be cyclic
    node* temp = head;
    if(head == NULL){
        cout<<"Your Linked List is empty "<<endl;
    }
    map<node*, bool> visited; // this line makes a map of bool type which is pointer of class node
    while(temp != NULL){
        if(visited[temp] == true){
            cout<<"List is cyclic from node which has data = "<< temp -> data<<endl;
            return;
        }
        visited[temp] = true; // this marks temp node as true in maping so in above if statment if we find any node indicated by temp marked true which means that we already marked it true earlier and had come again on it. Which means we are in a cycle
        temp = temp -> next;
    }
    cout<<"List is not cyclic"<<endl;
}

void cancellingTrueMaping(node* &head){ // it tells us from which node list is going to be cyclic
    node* temp = head;
    if(head == NULL){
        cout<<"Your Linked List is empty "<<endl;
    }
    map<node*, bool> visited; // this line makes a map of bool type which is pointer of class node
    while(temp != NULL){
        if(visited[temp] == false){
            cout<<"List is cyclic from node which has data = "<< temp -> data<<endl;
            return;
        }
        visited[temp] = false; // this marks temp node as true in maping so in above if statment if we find any node indicated by temp marked true which means that we already marked it true earlier and had come again on it. Which means we are in a cycle
        temp = temp -> next;
    }
    cout<<"List is not cyclic"<<endl;
}

void printToCheckCycle(node* &head){ // but it only works when linked list is in ascending or descending order
    if( head == NULL){
        cout<<"Your linked list is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;

        if(temp -> next != NULL){
        if(temp -> next -> data < temp -> data){
            cout<< temp -> data << " ";
            temp = temp -> next;
            while(temp -> next -> data > temp -> data){
                cout<<temp -> data<<" ";
                temp = temp -> next;
            }
            cout<<temp -> data;
            break;
        }
        }
    }
    cout<< endl;
    return;
}

void removeCycle(node* &tail){
    tail -> next = NULL;

}

int main ()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
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
    insertNode(tail, 18);
    print(head);
    insertNode(tail, 19);
    print(head);

    makeItSubCyclic(tail,4);
    printToCheckCycle(head);
    CheckSubCycleByMaping(head);
    removeCycle(tail);
    CheckSubCycleByMaping(head); // yeh function yaha to sahi kaam kar raha hai lekin agar iske niche vala function (printToCheckCycle(head)) isse pehle call karu to fir yeh sahi kaam nhi kr raha pata nhi kyu
    printToCheckCycle(head);
    // cancellingTrueMaping(head);

 return 0;
}