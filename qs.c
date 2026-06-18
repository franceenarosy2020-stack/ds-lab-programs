#include<stdio.h>
#include<conio.h>
int a[10];
void swap(int a[10],int k,int c)
{
int temp;
temp=a[k];
a[k]=a[c];
a[c]=temp;
}
void quick(int a[10],int left,int right)
{
int pivot,i,j;
if(left<right)
{
i=left;
j=right+1;
pivot=a[left];
do
{
do
i++;
while(a[i]<pivot);
do
j--;
while(a[j]>pivot);
if(i<j)
swap(a,i,j);
}while(i<j);
swap(a,left,j);
quick(a,left,j-1);
quick(a,j+1,right);
}
}
void main()
{
int i,n;
clrscr();
printf("Enter the size of the Array\n");
scanf("%d",&n);
printf("Enter the elements of the Array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
quick(a,0,n-1);
printf("Sorted Array:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
getch();
}
