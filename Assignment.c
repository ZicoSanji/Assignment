#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student //liked list to the students contains there data
{
    char* name;
    int student_id;
    int date[3] ;
    int score;
    struct Student* link ;
};

int main()
{

    printf("Welcome to our project\n\n");

    struct Student *head = malloc(sizeof(struct Student));//first node
    head->name=" the first student";
    head->student_id = 9190995;
    head->date[0] = 1;
    head->date[1] = 10;
    head->date[2] = 2000;
    head->score = 500;
    head->link= NULL ;

    struct Student *current = malloc(sizeof(struct Student));//making a linked list of  node after the first node.

    printf ("Enter the size of the linked list :  ");
    int num,n =0 ;

    scanf("%d",&num);
    for( n ; n<num-1 ; n++)
    {
        current=malloc(sizeof(struct Student));// N  nodes after the first node
        current->link= NULL ;
        struct Student *ptr = NULL;
        ptr = head ;
        current->name="student name ";
        while(ptr->link != NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=current;

    }




   struct Student New ;//       the new node we add program should have this data
    New.name="The new student";
    New.student_id = 9190999;
    New.date[0] = 16;
    New.date[1] = 8;
    New.date[2] = 2000;
    New.score = 520;
    New.link= NULL ;

    return 0;
}