#include <stdio.h>
#include <stdlib.h>

//LINKED LISTS vs. ARRAYS

//accessing data in a linked list may take more time, but 
//this structure can easily grow (just by adding more nodes)

//   struct { int data;
//            struct node * link;
//          }

//to make a new structure:

//        struct node n1
///OR     typedef struct node{  int data; } Node;
//        Node n1




//TRAVERSING

//end of each linked list is NULL
//make a funciton that prints out a linked list
//remember...never change the head!! (or move it)

//always consider these situations:

//  1. empty linked list
//  2. operation at the head (changing the head)
//  3. operation at the end of the list

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


Node * mergeLists(Node *l1, Node *l2){
    
    //start at the head of both lists
    Node *curr1 = l1;
    Node *curr2 = l2;
    Node *newList = NULL;
    
    //continue inserting while both linked lists are not empty
    while(curr1 != NULL || curr2 != NULL){
        
        //l1 is empty
        if(curr1 == NULL){
            //pick the next item form l2 and insert it at the end of the new list
            newList = insertAtEnd(newList, curr2->data);
            curr2 = curr2->link;
        }
        
        //l2 is empty
        else if(curr2 == NULL){
            //pick the next item from l1, and insert it a the end
            newList = insertAtEnd(newList, curr1->data);
            curr1 = curr1->link;
        }
        
        //one of l1 or l2 is empty
        else{
            //none of l1 or l2 are empty
            if(curr1->data < curr2->data ){
                //data l1 goes in
                newList = insertAtEnd(newList, curr1->data);
                //delete data from list
            }
            else{
                //data l2 goes in
                newList = insertAtEnd(newList, curr2->data);
                //delete data from list
            }
        }
    }  
    return newList;
}


int main(int argc, char **argv){
    
    //class problem number 1 (not finished)
    Node* head = insertAtFront(NULL, 10);
    printList(head);

    Node* new_node = insertAtFront(head, 2);
    printList(new_node);

    Node* new_node_2 = insertAtFront(new_node, 50);
    printList(new_node_2);

    Node* new_node_3 = insertAtEnd(new_node_2, 44);
    printList(new_node_2);


    //PROBLEM 2: Merge 2 lists, must be in assending order

    // l1:         5  -->  10  -->   20         (these LLists can be different sizes)
    // l2:         4  -->  15  -->   30
    //make list 1
    Node* list1 = insertAtEnd(NULL, 8);
    printList(list1);
    list1 = insertAtEnd(list1, 6);
    printList(list1);
    list1 = insertAtEnd(list1, 4);
    printList(list1);

    //make list 2
    Node* list2 = insertAtEnd(NULL, 7);
    printList(list2);
    list2 = insertAtEnd(list2, 5);
    printList(list2);
    list2 = insertAtEnd(list2, 3);
    printList(list2);

    Node* merged_list = mergeLists(list1, list2);
    printf("\n\nMerged List:");
    printList(merged_list);
	
	return 0;
}