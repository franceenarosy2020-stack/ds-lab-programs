#include <stdio.h>
#include <string.h>
#define SIZE 10
int top=-1;
char stack[SIZE];
void infixtopostfix(char [],char []);
void push(int);
char pop();
int priority(char );
void main()
	{
	char infix[100],postfix[100];
	printf("Enter the Expression : ");
	scanf("%s",infix);
	strcat(infix,")");
	infixtopostfix(infix,postfix);
	puts(postfix);
	}	

void infixtopostfix(char infix[],char postfix[])
	{
	int i,j;
	push('(');
	i=j=0;
	while(infix[i]!='\0')
		{
		int element=infix[i];
		if(element>='a' && element<='z' || element >= 'A' && element<='Z')
			{
			postfix[j]=element;
			j++;

			}
		else if(element=='(')
			{
			push('(');
			}
		else if(element==')')
			{
			int d=pop();
			while (d!='(')
				{
				postfix[j]=d;
				j++;
				d=pop();
				}
			}
		else if(element== '+' || element== '-' || element== '/' || element== '*' || element=='^')
			{
			int data=pop();
			if(priority(data)>=priority(element))
				{
				while (priority(data)>=priority(element))
					{
					postfix[j]=data;
					j++;
					data=pop();
					}
				push(data);
				push(element);

				}
			else
				{
				push(data);

				push(element);
				}
			}
		i++;
		}
	postfix[j]='\0';
	}

void push(int data)
	{
	if(top==SIZE-1)
		{
		printf("STACK Overflow");
		}
	else
		{
		top++;
		stack[top]=data;
		}
	}

char pop()
	{
	if(top==-1)
		{
		printf("STACK Underflow");
		}
	else
		{
		int val=stack[top];
		top--;
		return val;
		}
	}

int priority(char element)
	{
	if(element=='+' || element=='-')
		{
		return 1;
		}
	else if(element=='/' || element== '*')
		{
		return 2;
		}
	else if(element=='^')
		{
		return 3;
		}
	else
		{
		return 0;
		}
	}
