#include<stdio.h>
void insert(int a[],int *front,int *rear)
{
int e;
printf("\nenter the number:");
scanf("%d",&e);
if((*front==-1)&&(*rear==-1))
{
*front=*rear=0;
}
else
{
*rear+=1;
}
a[*rear]=e;
printf("\nthe entered element %d is inserted into the queue\n",e);
}
void delete(int a[],int *front,int *rear)
{
int e;
e=a[*front];
printf("\nthe element %d deleted from the queue",e);
*front+=1;
}
void display(int a[],int *front,int *rear)
{
int i;
printf("\nthe queue elements are");
for(i=*front;i<=*rear;i++)
printf("\n%d",a[i]);
}
int main()
{
int arr[10];
int front,rear;
int ch,e=1;
front=rear=-1;
while(e)
{
printf("\n----------menu---------\n");
printf("\n\t1.insert\n\t2.delete\n\t3.display\n\t4.exit\n");
printf("\n-----------------------\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:insert(arr,&front,&rear);
       break;
case 2:delete(arr,&front,&rear);
       break;
case 3:display(arr,&front,&rear);
       break;
case 4:e=0;
       printf("\nexiting from program\n");
       break;
default:printf("\nplease enter valid choice\n");
}
}
}

