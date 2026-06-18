#include<stdio.h>
#include<stdlib.h>
struct node
{
int coeff;
int exp;
struct node *link;
}*pptr,*rptr,*qptr,*New,*ptr,*ptr1,*pheader,*qheader,*rheader;
struct node *pheader;
struct node *qheader;
struct node *rheader;
void Add();
void main()
{
int i,x,y;
printf("Enter the no. of terms in the first Polynomial:");
scanf("%d",&x);
pheader=(struct node *)malloc(sizeof(struct node));
//pheader->coeff=NULL;
//pheader->exp=NULL;
pheader->link=NULL;
for(i=0;i<x;i++)
{
New=(struct node *)malloc(sizeof(struct node));
ptr=pheader;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=New;
printf("Enter the coeff&expo of term%d:",i+1);
                scanf("%d%d",&New->coeff,&New->exp);
                New->link=NULL;

}
printf("Enter the no. of terms in the second Polynomial:");
        scanf("%d",&y);
        qheader=(struct node *)malloc(sizeof(struct node));
        //qheader->coeff=NULL;
        //qheader->exp=NULL;
        qheader->link=NULL;
        for(i=0;i<y;i++)
        {
New=(struct node *)malloc(sizeof(struct node));
                ptr=qheader;
                while(ptr->link!=NULL)
                {
                        ptr=ptr->link;
                }
                ptr->link=New;
                printf("Enter the coeff&expo of term%d:",i+1);
                scanf("%d%d",&New->coeff,&New->exp);
                New->link=NULL;

        }
Add();

}
void Add()
{
pptr=pheader->link;
qptr=qheader->link;
rheader=(struct node *)malloc(sizeof(struct node));
rheader->link=NULL;
//rheader->exp=NULL;
//rheader->coeff=NULL;
rptr=rheader;
while(pptr!=NULL && qptr!=NULL)
{
if(pptr->exp==qptr->exp)
{
New=(struct node *)malloc(sizeof(struct node));
rptr->link=New;
rptr=New;
rptr->coeff=pptr->coeff+qptr->coeff;
rptr->exp=pptr->exp;
rptr->link=NULL;
pptr=pptr->link;
qptr=qptr->link;
}
else if(pptr->exp>qptr->exp)
{
New=(struct node *)malloc(sizeof(struct node));
                        rptr->link=New;
                        rptr=New;
                        rptr->coeff=pptr->coeff;
                        rptr->exp=pptr->exp;
                        rptr->link=NULL;
                        pptr=pptr->link;
}
else if(pptr->exp<qptr->exp)
{
New=(struct node *)malloc(sizeof(struct node));
                        rptr->link=New;
                        rptr=New;
                        rptr->coeff=qptr->coeff;          
                        rptr->exp=qptr->exp;
                        rptr->link=NULL;
                        qptr=qptr->link;
}
}
if(pptr!=NULL&&qptr==NULL)
{
while(pptr!=NULL)
{
New=(struct node *)malloc(sizeof(struct node));
                        rptr->link=New;
                        rptr=New;
                        rptr->coeff=pptr->coeff;
                        rptr->exp=pptr->exp;
                        rptr->link=NULL;
                        pptr=pptr->link;
}
}
if(qptr!=NULL&&pptr==NULL)
        {
                while(qptr!=NULL)
                {
                        New=(struct node *)malloc(sizeof(struct node));
                        rptr->link=New;
                        rptr=New;
                        rptr->coeff=qptr->coeff;
                        rptr->exp=qptr->exp;
                        rptr->link=NULL;
                        qptr=qptr->link;
                }
        }
ptr=rheader->link;
while(ptr!=NULL)
{
printf("%dX^%d ",ptr->coeff,ptr->exp);
ptr=ptr->link;
if(ptr!=NULL)
{
        printf("+ ");
}
}
}
