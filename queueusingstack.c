#include<stdio.h>

void push(int stack[],int *top,int ele)
{
*top=*top+1;
stack[*top]=ele;
}

int pop(int stack[],int *top)
{
int ele;
ele=stack[*top];
*top=*top-1;
return(ele);
}

void enqueue(int stack1[],int *top1)
{
int i,ele;
printf("\nenter the element");
scanf("%d",&ele);
push(stack1,top1,ele);
}
 
void dequeue(int stack1[],int *top1,int stack2[],int *top2)
{
int i;
int count=*top1;
for(i=0;i<=count;i++)
{
push(stack2,top2,pop(stack1,top1));
}
printf("\nthe element %d is delete from queue\n",pop(stack2,top2));
count=*top2;
for(i=0;i<=count;i++)
{
push(stack1,top1,pop(stack2,top2));
}
}

void display(int stack[],int *top)
{
int i;
for(i=0;i<=*top;i++)
{
printf("%d",stack[i]);
}
}

void main()
{
int stack1[20],stack2[20];
int top1=-1,top2=-1;
int ch;
int e=1;
printf("\nqueue using stack\n");
while(e)
{
printf("\n------------menu------------\n");
printf("\n\t 1.enqueue \n\t 2.dequeue \n\t 3.display \n\t 4.exit\n");
printf("\n----------------------------\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue(stack1,&top1);
     break;
case 2:dequeue(stack1,&top1,stack2,&top2);
     break;
case 3:display(stack1,&top1);
     break;
case 4:e=0;
       printf("\nexiting from the program\n");
     break;
default:printf("\nplease enter valid choice\n");
}
}
}


