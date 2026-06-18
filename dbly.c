#include<stdio.h>
#include<stdlib.h>
int data,item;
typedef struct node
{
 int data;
    struct node*link;
}node;
node*front=NULL;
node*rear=NULL;
node*ptr;
void enqueue_front();
void enqueue_rear();
void dequeue_front();
void dequeue_rear();
void display();
void main()
{
 int ch;
 while(1)
 {
  printf("\nEnter the choice\n1.Insertion element at front\n2.Inserting element at rear\n3.Deleting element from front\n4.Deleting element from rear\n5.Display\n6.Exit:\n");
  scanf("%d",&ch);
  switch(ch)
     {
   case 1:enqueue_front();
             break;
       case 2:enqueue_rear();
             break;      
       case 3:dequeue_front();
             break;
       case 4:dequeue_rear();
             break;      
       case 5:display();
             break;
       default:exit(0);
     }
   }
}
void enqueue_front()
{
    ptr=(node*)malloc(sizeof(node));
    printf("enter the data: ");
    scanf("%d",&item);
    ptr->data=item;
    if((front==NULL)&&(rear==NULL))
 {
  front=ptr;
  rear=ptr;
        front->link=NULL;
        rear->link=NULL;
        
    }
    else
    {
      ptr->link=front;
      front=ptr;
    }
}
void enqueue_rear()
{
 int item;
 ptr=(node*)malloc(sizeof(node));
 printf("enter the data: ");
 scanf("%d",&item);
 ptr->data=item;
 if(front==NULL&&rear==NULL)
 {
  front=ptr;
  rear=ptr;
  front->link=NULL;
  rear->link=NULL;
    }
 else
 {
        rear->link=ptr;
  rear=ptr;
 }
}
 void dequeue_front()
{
   if(front==NULL)
 {
  printf("queue is empty\n");
 }
 else
 {
  printf("Deleted item is %d \n",front->data);
  front=front->link;
 }
}
void dequeue_rear()
{
  if(rear==NULL)
 {
  printf("queue is empty\n");
 }
 else
 {
  printf("Deleted item is %d \n",rear->data);
  ptr=front;
        while(ptr->link!=rear)
        {
        ptr=ptr->link;
        }
        ptr->link=NULL;
        rear=ptr;
 }
}
void display()
{
 ptr=front;
 if(front==NULL)
 {
  printf("Queue is empty\n");
 }
 else
 {
  while(ptr!=NULL)
  {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
  }
  printf("\n");
 }
}
