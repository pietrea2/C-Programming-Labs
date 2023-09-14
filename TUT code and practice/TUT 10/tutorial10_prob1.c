#include <stdio.h>
#include <stdlib.h>

typedef struct node{
        int data;
        struct node * link;
} Node;


Node *insertNodeAtEnd(Node *head, Node *newnode){
    
    printf("\nInserting at the end! ");
    if(head == NULL){
        head = newnode;
    }
    else{
        Node* currentNode = head;
        while(currentNode->link != NULL){
            currentNode = currentNode->link;
        }
        currentNode->link = newnode;
    }
    return head;
}
Node *recursiveReverse(Node *head){
    
    //reverse the linked list, in place, and return the head of the reversed list
    
    //base case, if empty or one element
    if(head == NULL || head -> link == NULL){
        return head;
    }
    else{
        //save old head
        Node *oldHead = head;
        
        //reverse all but the head of the linked list
        head = recursiveReverse(head -> link);
        
        //insert old head at the end of the reversed sub-list
        oldHead -> link = NULL;
        head = insertNodeAtEnd(head, oldHead);
        
    }
}

void printList(Node * head){
    
    printf("\nPrinting linked list:\n");

    Node * current = head;
    
    while(current != NULL){
        printf(" %d ", current->data);
        current = current->link;
    }
}



int main(int argc, char **argv)
{
    //Make linked list of structs
    //head
    Node * head = NULL;
    //First struct
    Node * new = (Node*) malloc ( sizeof(Node));
    new->data = 10;
    new->link = NULL;
    head = insertNodeAtEnd(head, new);

    printList(head);

    //Second struct
    Node * new2 = (Node*) malloc ( sizeof(Node));
    new2->data = 20;
    new2->link = NULL;
    head = insertNodeAtEnd(head, new2);

    //Third struct
    Node * new3 = (Node*) malloc ( sizeof(Node));
    new3->data = 30;
    new3->link = NULL;
    head = insertNodeAtEnd(head, new3);

    //Fourth struct
    Node * new4 = (Node*) malloc ( sizeof(Node));
    new4->data = 40;
    new4->link = NULL;
    head = insertNodeAtEnd(head, new4);

    printList(head);

    for (size_t i = 0; i < 5; i++)
    {
        Node * new_node = (Node*) malloc ( sizeof(Node));
        new_node->data = 50 + 10 * i;
        new_node->link = NULL;
        head = insertNodeAtEnd(head, new_node);
    }

    printList(head);



    //Test reversing linked list function
    printf("\n\n----Reversing the linked list:----\n");
    head = recursiveReverse(head);
    printList(head);
    



	return 0;
}