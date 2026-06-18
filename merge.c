#include<stdio.h>
#include<stdlib.h>

int i;

void merge(int a[],int first,int mid,int last)
{
 int temp[100],l1=first,u1=mid,l2=mid+1,u2=last;
 i=first;
 while(l1<=u1 && l2<=u2)
 {
  if(a[l1]<a[l2])
  {
   temp[i]=a[l1];
   i++;
   l1++;
  }
  else{
   temp[i]=a[l2];
   i++;
   l2++;
  }
 }
 while(l1<=u1)
 {
  temp[i]=a[l1];
  i++;
  l1++;
 }
 while(l2<=u2)
 {
  temp[i]=a[l2];
  i++;
  l2++;
 }
 for(i=first;i<=last;i++)
  a[i]=temp[i];
}
 

void mergeSort(int a[],int first,int last)
{
 if(first<last)
 {
   int mid=0;
   mid=(first+last)/2;
   mergeSort(a,first,mid);
   mergeSort(a,mid+1,last);
   merge(a,first,mid,last);
 }
}

void main()
{
 int a[100],n,first=0,last=0;
 printf("enter the number of elements:");
 scanf("%d",&n);
 printf("enter the elements:");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 last=n-1;
 mergeSort(a,first,last);
 printf("elements after sorting:\n");
 for(i=0;i<n;i++){
  printf("%d\t",a[i]);
 }
}
