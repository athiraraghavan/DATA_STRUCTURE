#include<stdio.h>
int SIZE = 3;
void push(int a[],int *last)
{
    if(*last >= SIZE - 1)
    {
        printf("stack overflow");
    }
    else
    {
	*last +=1;
	printf("\n Enter the element");
	scanf("%d",&a[*last]);
	
	printf("\n%d pushed in to the stack",a[*last]);
    }

}
int pop(int a[],int *last)
{
	int ele;
    if(*last > -1)
    {
	ele = a[*last];
	*last -=1;
	printf("\n The value %d poped from the stack", ele);
    }
    else
    printf("stack underflow");
} 
void display(int a[], int *last)
{
	int i;
	if(*last < 0)
	{
	    printf("\n stack is empty");
	    return;
	}
	else
	{
	printf("\n The stack elements are:");
	for(i=0;i <= *last;i++)
		printf("%d ",a[i]);
	}
}
int main()
{
int arr[SIZE],ch,e=1;
int last=-1;

while(e)
{
	printf("\n STACK USING ARRAY");
	printf("\n...........MENU...........");
	printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
	printf("\n..........................");
	printf("\n Enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			push(arr,&last);
			break;
		case 2:
			pop(arr,&last);
			break;
		case 3:
			display(arr,&last);
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

