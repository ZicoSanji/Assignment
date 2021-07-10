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
struct Student *ptr;
void display(struct Student *head) //Traverse and print function to display the linked list data
{
    printf("\nDisplaying the linked list ....\n\n");
    int count = 0 ;
    if (head == NULL)
        printf("linked list is emty");
    struct Student *ptr = NULL;
    ptr = head ;
    while (ptr != NULL)
    {
        count++;
        printf("The %d",count);
        printf(" Student data is  : \n");

        printf("\tName : %s\n",ptr->name );
        printf("\tStudent ID : %d\n",ptr->student_id );
        printf("\tDate Of Birth : %d",ptr->date[0] );
        printf(" / %d",ptr->date[1] );
        printf(" / %d\n",ptr->date[2] );
        printf("\tScore : %d\n\n",ptr->score );

        ptr = ptr ->link;

    }
    printf("The linked list have :    %d",count );
    printf("  Nodes");
    printf("\n\n---------------------------------------------------------------\n\n");
}

struct Student * insert(struct Student *head,struct Student New,int n)
{

    printf("\n\nInserting a new student data in the linked list ...\n");

    struct Student *ptr,*temp ;
    temp=(struct Student* )malloc(sizeof(struct Student));

     temp->name=New.name;
     temp->student_id = New.student_id;
     temp->date[0] = New.date[0];
     temp->date[1] = New.date[1];
     temp->date[2] = New.date[2];
     temp->score = New.score;
     temp->link=NULL ;

    printf("\twhat do you want to do ?\n\tTo add new student at the end press\t\t1\n\tTo add new student at the first press\t\t2\n\tTo add new student at the middle press\t\t3\n");
    int j ;
    scanf("%d",&j);

switch (j){

    case 1:
        ptr = head;
        while(ptr->link != NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp;
        return head;

        break;

    case 2:
        ptr=temp;
        ptr->link=head;
        head = ptr;
        return head;
        break;

    case 3:
        ptr = head;
        int i = 0;

         while(i<=n/2-1)
        {
            ptr=ptr->link;
            i++;
        }
        temp->link=ptr->link;
        ptr->link=temp;
        return head;
        break;

    default:
        break ;

    }
}
void creat_dynamic_array (int);

int main()
{
    int data_type;
    int num,n =0 ;

    printf("Welcome to our project\n\n");
    printf("what type of data structure that you want to use    \n");
    printf("press 1 to use linked list    \n");
    printf("press 2 to use dynamic array    \n");
    scanf("%d", &data_type);

    if(data_type==1)
        {
            goto Linked_List;
        }

    else if (data_type==2)
    {
        printf("what is the number of students that you will work with  \n");
    scanf("%d", &n);
    creat_dynamic_array (n);
    }


 Linked_List :;
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

    display(head);
    head=insert(head,New,n);
    display(head);



    return 0;
}


void creat_dynamic_array (int n)
 {int operation_number,number_of_student_in_array=0;
ptr = (struct Student*) calloc(n, sizeof(struct Student));
printf("array has been created  \n");
operations_2:

    while(1){
    printf("what kind of operations do you want to do? \n");
    printf("press 1 to Insert a new student in the beginning    \n");
    printf("press 2 to Insert a new student at the end    \n");
    printf("press 3 to Insert a new student in the middle    \n");
    printf("press 4 to print  all students data    \n");
    scanf("%d", &operation_number);
if (operation_number==1){

    //Move element to make 1st space free
    int i ;
    for ( i=number_of_student_in_array-1;i>=0;i--)
    {
        ptr[i+1]=ptr[i];
    }
printf("Enter student name \n");
  scanf ("%s", (ptr)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr )->student_id);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr )->date[0]);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr )->date[1]);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr )->date[3]);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr )->score);
//the number of students in the array increased by 1
number_of_student_in_array++ ;
}
else if (operation_number==2){

printf("Enter student name \n");
  scanf ("%s", (ptr+number_of_student_in_array)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->student_id);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->date[0]);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->date[1]);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->date[2]);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr+number_of_student_in_array )->score);


  number_of_student_in_array++;


}
else if (operation_number==3){

int i ;
    for ( i=number_of_student_in_array-1;i>= number_of_student_in_array/2;i--)
    {
        ptr[i+1]=ptr[i];
    }
printf("Enter student name \n");
  scanf ("%s", (ptr+number_of_student_in_array/2)->name);
printf("Enter Student_ID \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->student_id);
printf("Enter Student_date_day \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->date[0]);
printf("Enter Student_date_month \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->date[1]);
printf("Enter Student_date_year \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->date[3]);
printf("Enter Student_score \n");
  scanf ("%d", &(ptr+number_of_student_in_array/2 )->score);


   number_of_student_in_array++;
}

else if (operation_number==4){
int i ;
for ( i=0;i<number_of_student_in_array;i++)
    {printf("student %d \n",i);
printf ("student name is %s \n", (ptr+i)->name);
printf ("Student_ID is %d\n", (ptr+i )->student_id);
printf ("Student_date_day %d\n", (ptr )->date[0]);
printf ("Student_date_month %d\n", (ptr+i )->date[1]);
printf ("Student_date_year %d\n", (ptr+i )->date[2]);
printf ("Student_score %d\n", (ptr+i )->score);
}
}
else {
        printf("Invalid input !! !\n");

        goto operations_2 ;
}

 }
 }


