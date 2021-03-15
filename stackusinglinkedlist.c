#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top = NULL;

void push()
{
    struct node *temp;
    int val;
    printf("\n Enter a value\n");
    scanf("%d",&val);
    temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = val;
    if(top == NULL)
        temp -> next = NULL;
    else
        temp -> next = top;
    top = temp;
    printf("\n One value is inserted");    
}
void pop()
{
    struct node *temp = top;
    if(top == NULL)
        printf("\n underflow\n");
    else
    {
        printf("\n deleted element is %d",temp -> data);
        top = temp -> next;
        free(temp);
    }
        
}
void display()
{
    if(top == NULL)
        printf("\n empty");
    else
    {
        struct node *temp = top;
        while(temp -> next != NULL)
        {
            printf("%d-->", temp -> data);
            temp = temp -> next;
        }
        printf("%d-->NULL", temp -> data);
    }
}
int main()
{
    int ch;
    int e=1;

    while(e)
    {
    	    printf("\n STACK USING LINKEDLIST");
	    printf("\n...........MENU...........");
	    printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
	    printf("\n..........................");
	    printf("\n Enter your choice");
	    scanf("%d",&ch);
	    switch(ch)
	    {
		    case 1:
			    push();
			    break;
		    case 2:
			    pop();
			    break;
		    case 3:
			    display();
			    break;
		    case 4:
			    e=0;
			    printf("\n exiting");
			    break;
		    default: printf("\n please enter valid choice");
	    }
    }
    
    return 0;
}

