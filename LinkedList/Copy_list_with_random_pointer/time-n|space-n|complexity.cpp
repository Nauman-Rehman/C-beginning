// A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.
// Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node.
// Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.
// For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

void insertAtTail(Node* &head2, Node* &tail2, int d){
        Node* newNode = new Node(d);
        
        if(head2 == NULL){
            head2 = newNode;
            tail2 = head2;
            return;
        }
        else{
            tail2 -> next = newNode;
            tail2 = newNode;
            return;
        }
    }

    Node* copyRandomList(Node* head) {
        Node* head2 = NULL;
        Node* tail2 = NULL;
        Node* temp = head;
        while(temp != NULL){
            insertAtTail(head2, tail2, temp -> val);
            temp = temp -> next;
        }
        unordered_map<Node*, Node*> oldToNew;
        temp = head;
        Node* temp2 = head2;
        while(temp != NULL){
            oldToNew[temp] = temp2;
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        temp = head;
        temp2 = head2;
        while(temp2 != NULL){
            temp2 -> random = oldToNew[temp -> random];
            temp = temp -> next;
            temp2 = temp2 -> next;
        }
        return head2;
    }
