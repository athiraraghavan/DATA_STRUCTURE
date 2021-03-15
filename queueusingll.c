#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void insert()
{
  struct Node *temp;
  int val;
  temp=(struct Node *)malloc(sizeof(struct Node));
  if(temp==NULL)
  {
   printf("\n Queue Overfolw\n");
return;
}
else
{
printf("\n Enter the value:");
scanf("%d",&val);
temp->data=val;
temp->next=NULL;
if(front==NULL)
{
front=rear=temp;
}
else
{ 
rear->next=temp;
rear=temp;
}
printf("\n One value is inserted to queue\n");
}
}
void delete()
{
struct Node *temp;
if(front==NULL)
{
printf("\n Queue underflow\n");
return;
}
else
{
temp=front;
front=front->next;
printf("\n The value %d is deleted from queue",temp->data);
free(temp);
}
}
void display()
{
struct Node *temp;
temp=front;
if(front ==NULL)
{
printf("\n Empty Queue\n");
}
else
{
printf("\n Queue elements are: ");
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
}
void main()
{
int ch;
int e=1;
printf("\n QUEUE USING LINKED LIST\n");
while(e)
{
printf("\n---------MENU--------\n");
printf("\n\t 1.Insert \n\t 2.Delete \n\t 3.Display \n\t 4.Exit\n");
printf("\n --------------------\n");
printf("\n Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
     break;
case 2:delete();
     break;
case 3:display();
     break;
case 4:e=0;
     printf("\n Exiting from program\n");
     break;
default:printf("\n Please enter valid choice\n");
}
}
}
