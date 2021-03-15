#include<stdio.h>
void read(int arr[],int *limit)
{
int i;
printf("\n Enter the limit:");
scanf("%d",limit);
printf("\n Enter elements in ascending order: ");
for(i=0;i<*limit;i++)
scanf("%d",&arr[i]);
}
int merge(int arr[],int limit1,int arr2[],int limit2,int result[],int resultlimit)
{
int i;
int i1,i2;
i1=i2=0;
for(i=0;i<resultlimit;i++)
{
if(i1>=limit1 || i2>=limit2)
{
break;
}
if(arr1[i1]<arr2[i2])
{
result[i]=arr2[i2];
i2++;
}
}
while(i1<limit1)
{
result[i]==arr1[i1];
i++;
i1++;
}
while(i2<limit2)
{
result[i]==arr2[i2];
i++;
i2++;
}
}
void display(int arr1[],int limit1,int arr2[],int limit2,int result[],int resultlimit,int flag)
{
int i;
if(limit<=0 || limit2<=0)
{
printf("\n Empty arrays. Choose read option");
return;
}

