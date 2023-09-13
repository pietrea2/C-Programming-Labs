//string constant:
 //                 char *myStr = "Hello world";
 
 //array length = # characters + 1
 
 //                 char myStr[]  = "Hello world";    --> here memory is declared in program STACK (you can access and edit)
 
 
 //dynamically create/allocate strings on the fly (in the heap)
 //malloc() !!!


//EX:  char *string = (char*) malloc(500 * sizeof(char));
        //strcpy(string, "Hello world");
        //!!!memory allocted in malloc is not within scope of if loops, functions, block of code
        //!!needs to be freed! using free()
        
        
        
//struct ---> make a new variable type (you make a new data type)
//EX:  struct myStruct {
    //    int myint;
    //    char mychar;
    //  }
    //
    //   typedef struct myStruct Myvariable
    //   typedef <existing_type_name> <new_type_name> 
    
    
    
//"The variables withing a struct are called its members"
//"To acces a member, we use the dot (.) operator"

//Myvariable.myint = 

//Q: "What if a struct variable is referenced by a pointer?"
/*
EX:  
myStruct *pNewVal = NULL;
pNewVal = (myStruct**) malloc( sizeof(myStruct));
(*pNewVal).myINt = 10;
*/

//dereference it then use the dot? too much work!
//use the  -> operator

//EX: pNewVal -> myINt = 10;




////LINKED LISTS

//a sequence of structs, each instance of the struct is connected to another via pointers
//it is a composite data type (can include all kinds of types)

//recap = pointer (variable) stores adresses, and tells computer what the variable type is at the address

//ONE MEMBER OF THE struct MUST BE A POINTER OF ITS OWN TYPE

//ex:    struct node{
    //      int data;
    //      struct node * link;  ABSOLUTELY NEEDED
    //   };
    
// Creating a function that returns a pointer to type "Node"
// start with: initialize members to some default

// Node *newNode() {
    //Node *pNode = (Node *) malloc( sizeof(Node));
    
    //if(pNode != NULL){
        //pNode -> data = 0;
        //pNode -> link = nextNode;
    //}
//}
        


#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello world\n");
	return 0;
}
