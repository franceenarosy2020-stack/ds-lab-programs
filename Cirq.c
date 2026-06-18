#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
void Enqueue(int q[50],int max,int item);
void Dequeue(int q[50],int max);
void Display(int q[50],int max);
void main()
	{
	int q[50],max,i,j,a,item;
	printf("enter the max elements\n");
	scanf("%d",&max);
	while(1)
	{
	printf("enter 1 for Enqueue\nenter 2 for Dequeue\nenter 3 to display the Queue\nenter 4 to exit\n");
	scanf("%d",&a);
	switch(a)
		{
		case 1:
		printf("enter the element to be inserted\n");
		scanf("%d",&item);
		Enqueue(q,max,item);
		break;
		
		case 2:
		Dequeue(q,max);
		break;
		
		case 3:
		Display(q,max);
		break;
		
		case 4:
		exit(0);
		break;
		
		default:
		printf("Invalid input!\n");
	
	}
	}
	}
void Enqueue(int q[50],int max,int item)
	{
	if((rear+1)%max==front)
		printf("Queue is full!\n");
	else if(front==-1&&rear==-1)
		{
		front=0;
		rear=0;
		q[rear]=item;
		}
	else
		{
		rear = (rear+1)%max;
		q[rear]=item;
		}	
	}
void Dequeue(int q[50],int max)
	{
	int item;
	if(front==-1&&rear==-1)
		printf("queue is empty\n");
	else if(front==rear)
		{
		 item=q[front];
		 printf("deleted item is %d",item);
		 front=-1;
		 rear=-1;
		}
	else 
		{
		item=q[front];
		 printf("deleted item is %d",item);
		 front=(front+1)%max;
		}
	}	
void Display(int q[50],int max)
	{
	int i;
	if(front==-1&&rear==-1)
		printf("queue is empty\n");
	else
		{
		if(front<=rear)
			{
			for(i=front;i<=rear;i++)
			printf("%d\t",q[i]);
			printf("\n");
			}
		else
			{
			for(i=front;i<=max-1;i++)
			printf("%d\t",q[i]);
			for(i=0;i<=rear;i++)
			printf("%d\t",q[i]);
			printf("\n");
			}
		}
	}
	
