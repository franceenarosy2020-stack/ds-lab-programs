#include<stdio.h>
#include<stdlib.h>
int top=-1;
void Push(int stck[50],int max,int item);
void Pop(int stck[50],int max);
void Display(int stck[50],int max);
void main()
	{
	int stck[50],max,i,j,a,item;
	printf("enter the max elements\n");
	scanf("%d",&max);
	while(1)
	{
	printf("enter 1 for Push\nenter 2 for POP\nenter 3 to display the stack\nenter 4 to exit\n");
	scanf("%d",&a);
	switch(a)
		{
		case 1:
		printf("enter the element to be inserted\n");
		scanf("%d",&item);
		Push(stck,max,item);
		break;
		
		case 2:
		Pop(stck,max);
		break;
		
		case 3:
		Display(stck,max);
		break;
		
		case 4:
		exit(0);
		break;
		
		default:
		printf("Invalid input!\n");
	
	}
	}
	}
void Push(int stck[50],int max,int item)
	{
	if(top==max-1)
		printf("Stack Overflow!\n");
	else
		{
		top=top+1;
		stck[top]=item;
		}
	}
void Pop(int stck[50],int max)
	{
	int item;
	if(top<0)
		printf("Stack underflow!\n");
	else
		{
		item=stck[top];
		top=top-1;
		printf("%d is popped\n",item);
		}
	}	
void Display(int stck[50],int max)
	{
	int i;
	if(top<0)
	printf("Stack is empty!\n");
	else
	{
	for(i=top;i>=0;i--)
	printf("%d\n",stck[i]);
	}
	}
	
