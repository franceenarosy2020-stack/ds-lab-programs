#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
void Push(char stck[50],int max,char item);
void Pop(char stck[50],int max);
void main()
	{
	int max,i;
	char stck[50],str[20];
	printf("enter the string\n");
	scanf("%s", str);
	max = strlen(str);
	for(i=0;i<max;i++)
		{
		Push(stck,max,str[i]);
		}
	printf("The reversed string is ");
	for(i=max;i>0;i--)
		{
		Pop(stck,max);
		}		
	}
void Push(char stck[50],int max,char item)
	{
	top=top+1;
	stck[top]=item;
	}
void Pop(char stck[50],int max)
	{
	char item;
	item=stck[top];
	top=top-1;
	printf("%c",item);
	}			
