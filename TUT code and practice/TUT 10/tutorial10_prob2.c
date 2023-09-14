#include <stdio.h>
#include <stdlib.h>


typedef struct student{
    char *name;
    double GPA;
} Student;


//BINARY SEARCH BUT RECURSIVELY!!!!!
int binarySearchHelper(int list[], int start, int end, int item ){
    
    if (start > end){   //you didnt find anytihng, you went over it
        return -1;
        
        int mid = (start + end) /2;
        
        if( list[mid] == item ){
            //found it!! lets return the index
            return mid;
        }
        else if( item < list[mid] ){
            //we have to search the first half of the list
            return binarySearchHelper(list, start, mid - 1, item);
            
            
        }
        else{
            //item > list[mid] we have to search the second half
            return binarySearchHelper(list, mid + 1, end, item);
        }
    }

}

int recursiveBinarySearch( int list[], int len, int item ){
    
    return binarySearchHelper(list, 0, len - 1, item);
}

void printStudent(Student *student){

    printf("Student Name: %s\nStudent Grade: %f\n\n", student->name, student->GPA);
}

Student **addStudentToList(Student **list, char *name, double gpa){
    Student *student;
    student = (Student *)malloc( sizeof(Student) );
    student->name = (char *)malloc( sizeof(char)*10 + 1);
    student->name = name;
    student->GPA = gpa;

    
    for (int i = 0; i < 10; i++)
    {
        if (list[i] == NULL){
            list[i] = student;
            break;
        }
    }
    
   //list[0] = student;
    return list;
}

Student **initializeStudentList(Student **list, int length){

    for (int i = 0; i < length; i++){
        list[i] == NULL;
    }
    return list;
}



int main(int argc, char **argv)
{

    Student *s1;
    s1 = (Student *)malloc( sizeof(Student) );
    s1->name = (char *)malloc( sizeof(char)*10 + 1);
    
    printf("Student Linked List.\nEnter the name of a student [0-5 characters long please]:\n");
    scanf("%s", s1->name);
    printf("Enter that students GPA:\n");
    double gpa1;
    scanf(" %lf", &gpa1);
    //printf("%lf", &gpa1);
    //s1->GPA = 2.7;
    s1->GPA = gpa1;

    printStudent(s1);

    Student **studentList = (Student **)malloc( sizeof(Student *) * 10 );
    //studentList = initializeStudentList(studentList, 10);
    //studentList = addStudentToList(studentList, s1->name, gpa1);
    studentList[0] = s1;

    printf("\n\n%s %lf", studentList[0]->name, studentList[0]->GPA);



    //Fill up list of students
    Student *s2;
    s2 = (Student *)malloc( sizeof(Student) );
    s2->name = (char *)malloc( sizeof(char)*10 + 1);
    s2->name = "Ben";
    s2->GPA = 3.4;

    Student *s3;
    s3 = (Student *)malloc( sizeof(Student) );
    s3->name = (char *)malloc( sizeof(char)*10 + 1);
    s3->name = "Tom";
    s3->GPA = 1.1;




    
    free(s1->name);
    free(s1);
    free(s2->name);
    free(s2);
    free(s3->name);
    free(s3);
    
    
	return 0;
}