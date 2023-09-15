#include <stdio.h> 

int main(void){

    int numb;
    printf("Type in a digit between 0 and 9:\n\n");
    scanf("%d", &numb);
    
    printf("\n--------------------------------------------------\n"      
             "--------------------------------------------------\n"
             "-----------%d%d%d%d%d-----------________---------------\n"    
             "-----------%d%d%d%d%d-----------|Hello!|---------------\n"
             "-----------%d%d%d%d%d----------------------------------\n" 
             "-------------%d------------------------------------\n"
             "-------------%d------------------------------------\n"    
             "------------%d%d%d-----------------------------------\n"
             "-----------%d-%d-%d----------------------------------\n"
             "----------%d--%d--%d---------------------------------\n"
             "---------%d---%d---%d--------------------------------\n"
             "--------%d----%d----%d-------------------------------\n" 
             "-------------%d------------------------------------\n"
             "------------%d%d%d-----------------------------------\n"
             "-----------%d---%d----------------------------------\n"
             "----------%d-----%d---------------------------------\n"
             "---------%d-------%d--------------------------------\n"
             "--------%d---------%d-------------------------------\n"
             "--------------------------------------------------\n\n",
    
               numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
               numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
               numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
               numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
               numb, numb, numb, numb); 
     
     printf("Type in another digit between 0 and 9 to keep reading: ");
     scanf("%d", &numb);
     
     printf("\n--------------------------------------------------\n"      
              "---------------------_______________________------\n"
             "-----------%d%d%d%d%d-----|My name is Klarf.----|------\n"    
             "-----------%d%d%d%d%d-----|I enjoy music,-------|------\n"
             "-----------%d%d%d%d%d-----|and coding of course!|------\n"  
             "-------------%d------------------------------------\n"
             "-------------%d------------------------------------\n"    
             "------------%d%d%d---%d-------------------------------\n"
             "-----------%d-%d-%d-%d--------------------------------\n"
             "----------%d--%d--%d---------------------------------\n"
             "-----------%d-%d------------------------------------\n"
             "------------%d%d------------------------------------\n"    
             "-------------%d------------------------------------\n"
             "------------%d%d%d-----------------------------------\n"
             "-----------%d---%d----------------------------------\n"
             "----------%d-----%d---------------------------------\n"
             "---------%d-------%d--------------------------------\n"
             "--------%d---------%d-------------------------------\n"  
             "--------------------------------------------------\n\n",
               
              numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
              numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
              numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
              numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
              numb, numb, numb, numb);
                
    printf("Type in another digit between 0 and 9 to continue: \n");
    scanf("%d", &numb);
    
    printf("\n--------------------------------------------------\n"      
             "----------------------____________________--------\n"
             "-----------%d%d%d%d%d------|What is your name?|--------\n"    
             "-----------%d%d%d%d%d----------------------------------\n"
             "-----------%d%d%d%d%d----------------------------------\n"  
             "-------------%d------------------------------------\n"
             "-------------%d------------------------------------\n"    
             "------------%d%d%d-----------------------------------\n"
             "-----------%d-%d-%d----------------------------------\n"
             "----------%d--%d--%d---------------------------------\n"
             "-----------%d-%d-%d----------------------------------\n"
             "------------%d%d%d-----------------------------------\n"    
             "-------------%d------------------------------------\n"
             "------------%d%d%d-----------------------------------\n"
             "-----------%d---%d----------------------------------\n"
             "----------%d-----%d---------------------------------\n"
             "---------%d-------%d--------------------------------\n"
             "--------%d---------%d-------------------------------\n"   
             "--------------------------------------------------\n\n",
              
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
             numb, numb, numb, numb);
               
    char name[11];
    printf("Please type in your name: (just first name, please)\n");
    scanf("%s", &name);
    
    printf("\n--------------------------------------------------\n"      
             "------------------------___________________-------\n"
             "-----------%d%d%d%d%d--------|Hello%11s!|-------\n"  
             "-----------%d%d%d%d%d----------------------------------\n"
             "-----------%d%d%d%d%d----------------------------------\n"  
             "-------------%d------------------------------------\n"
             "-------------%d------------------------------------\n"    
             "------------%d%d%d---%d-------------------------------\n"
             "-----------%d-%d-%d-%d--------------------------------\n"
             "----------%d--%d--%d---------------------------------\n"
             "-----------%d-%d------------------------------------\n"
             "------------%d%d------------------------------------\n"    
             "-------------%d------------------------------------\n"
             "------------%d%d%d-----------------------------------\n"
             "-----------%d---%d----------------------------------\n"
             "----------%d-----%d---------------------------------\n"
             "---------%d-------%d--------------------------------\n"
             "--------%d---------%d-------------------------------\n"  
             "--------------------------------------------------\n\n",
             
             numb, numb, numb, numb, numb, name, numb, numb, numb, numb, numb,
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb, numb, 
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
             numb, numb, numb, numb, numb, numb, numb, numb, numb, numb, numb, numb);
    
    printf("Type in another digit between 0 and 9 to continue: \n");
    scanf("%d", &numb);
    
    printf("\n------------------------------------------------\n"      
             "----------_________________---------------------\n"
             "---------|This is my house.|--------------------\n"  
             "---------|Let's go inside! |--------------------\n"
             "------------------------------------------------\n"  
             "-----------------------------____________-------\n" 
             "----------------------------/            \\------\n"    
             "---------------------------/              \\-----\n"
             "--------------------------/                \\----\n"
             "-----%d%d%d-----------------/__________________\\---\n"
             "-----%d%d%d----------------|                   |---\n"
             "------%d-----------------|                   |---\n"    
             "-----%d%d%d%d%d%d-------------|   _____    ______ |---\n" 
             "----%d-%d-----------------|   |_|_|    |    | |---\n"
             "---%d--%d-----------------|   |_|_|    |    | |---\n"  
             "------%d%d----------------|            |  * | |---\n"       
             "-----%d-%d----------------|            |    | |---\n"  
             "----%d---%d---------------|____________|____|_|---\n"  
             "------------------------------------------------\n\n",
             
              numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
              numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
              numb, numb, numb);
              
    printf("Type in another digit from 0 to 9 to go inside the house: \n");
    scanf("%d", &numb);
    

    printf("\n|                                                       |\n"   //62 spaces per line
           "|                                                       |\n"
           "|                    ___________________________        |\n"       
           "|        %d%d%d%d%d      |Its nice and cozy in here. |       |\n"    
           "|        %d%d%d%d%d      |Oh! Look over there,       |       |\n"     
           "|        %d%d%d%d%d      |Its my favourite painting! |       |\n"    
           "|          %d                                            |\n"
           "|          %d                                            |\n"
           "|         %d%d%d                                           |\n"
           "|        %d %d %d %d%d                                       |\n"
           "|       %d  %d  %d                                         |\n"
           "|      %d   %d                                            |\n"
           "|          %d                                            |\n"
           "|         %d%d%d                                           |\n"
           "|        %d   %d                                          |\n"
           "|       %d     %d                                         |\n"
           "|      %d       %d                                        |\n"
           "|_______________________________________________________|\n",
           
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb); 

    printf("\nType in another digit between 0 and 9 to continue: \n");
    scanf("%d", &numb);
    
    printf("\n                                                                            \n"
           "                                                                            \n"
           "              %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                                       \n"                       //23 var
           "          %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                                   \n"                       //31 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d      __________________     \n" //  __________________    19 //41 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d     | Could you guess  |                  \n" // | Could you guess  |   20 //41 var
           "     %d%d%d%d%d%d%d%d%d%d%d       %d%d%d%d%d%d%d%d       %d%d%d%d%d%d%d%d     | what the name of |     \n" // | what the name of |   20// 27 var
           "     %d%d%d%d%d%d%d%d%d%d%d       %d%d%d%d%d%d%d%d       %d%d%d%d%d%d%d%d     | the painting is? |     \n" // | the painting is? |   20 //27 var
           "     %d%d%d%d%d%d%d%d%d%d%d       %d%d%d%d%d%d%d%d       %d%d%d%d%d%d%d%d                              \n"                              //27 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                              \n"                              //41 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                              \n"                              //41 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                              \n"                              //41 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d                %d%d%d%d%d%d%d%d%d%d%d                              \n"                              //25 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d               %d%d%d%d%d%d%d%d%d%d%d                             \n"                              //27 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d              %d%d%d%d%d%d%d%d%d%d%d                              \n"                              //29 var
           "     %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d            %d%d%d%d%d%d%d%d%d%d%d%d                              \n"                              //33 var
           "          %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                                   \n"                              //31 var
           "              %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                                       \n"                              //23 var
           "                 %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d                                          \n"                              //17 var
           "                    %d%d%d%d%d%d%d%d%d%d                                              \n"                              //10 var
           "                    %d%d%d%d%d%d%d%d%d%d                                              \n\n",                              //10 var
           
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb, numb, numb, numb, numb, numb,
           numb, numb, numb, numb, numb);
    
    return 0;    
}