//Final 2011 Question

//Given:
//typedef struct node {
    //                  int info;
    //                  struct node * link;    --> link pointer
    //                } Node;
//typedef struct node Node;

//Write a C function: printDuplicate, that receives the address of the first node in linked list,
//and prints any duplicate interger.
//e.g: 1,3,3,6,7,4,6
//print: 3, 6 

//Plan: What are the cases i need to check?
//      1. Empty List  --> return
//      2. One node    --> return
//      3. More than 2 nodes


//                  pointer to linked list 
//                      ____________
//void printDuplicate ( Node * head ) {

//           Node * current = head, *next;    --> two pointers, we'll compare 2 numbers with each other

//           while ( current != NULL ){
//                      next = current -> link;
//                      while ( next != NULL){
//                              if (current -> info == next -> info){
    //                                  printf("%d\n", current -> info);
    //                           }
    //                  }
    //                   current = current -> link;
    //      }
    
#include <stdio.h>
    
int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}