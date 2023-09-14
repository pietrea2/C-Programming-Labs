#include <stdio.h>
#include <stdlib.h>

//Reverse a linked list without creating new nodes

//      5 --> 0 --> 10
//      10 --> 0 --> 5

//go through the list, and keep swaping each pair along the list
typedef struct node{
        int data;
        struct node * link;
} Node;

Node * createNewNode( int newData, Node * newLink){
    Node * new = (Node*) malloc ( sizeof(Node));
    
    new->data = newData;
    new->link = newLink;
    
    printf("New node created: %d\n", new->data);

    return new;
}

void printList(Node * head){
    
    printf("\nPrinting linked list:\n");

    Node * current = head;
    
    while(current != NULL){
        printf(" %d ", current->data);
        current = current->link;
    }
}

Node * insertAtFront(Node* head, int newData){
    printf("\nInserting at front! ");
    return createNewNode(newData, head);
}

Node * insertAtEnd(Node * head, int newData){
    Node* currentNode = head;
    
    printf("\nInserting at the end! ");
    if(currentNode == NULL){
        return createNewNode(newData, head);
    }
    else{
        
        while(currentNode->link != NULL){
            currentNode = currentNode->link;
        }
        currentNode->link = createNewNode(newData, NULL);
    }
    return head;
}

Node * reverseList(Node * head){
            
    if(head == NULL || head->link == NULL){
        return head;
    }
    else{
        //make the two pointers
        Node *prev = head;
        Node *curr = head->link;
        
        Node *temp = NULL;
        //making the old head (new tail) point to NULL
        prev->link = NULL;
        
        while(curr != NULL){
            temp = curr->link;
            curr->link = prev;//you have to break one of the links, but you want to track the next node, (dont wanna lose it!!!)
            
            prev = curr;
            curr = temp;
        }
        return prev; //this becomes the new head
    }
}


int main(int argc, char **argv){

	Node* head = insertAtFront(NULL, 3);
    printList(head);

    Node* new_node = insertAtFront(head, 2);
    printList(new_node);

    Node* new_node_2 = insertAtFront(new_node, 1);
    printList(new_node_2);

    Node* new_node_3 = insertAtEnd(new_node_2, 4);
    printList(new_node_2);

    Node* new_head = reverseList(new_node_2);
    printList(new_head);

	return 0;
}