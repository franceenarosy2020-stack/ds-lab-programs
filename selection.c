#include<stdio.h>
void selection(int A[20],int n)
	{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
		{
		min = i;
		for(j=i+1;j<n;j++)
			{
			if(A[j]<A[min])
			min=j;
			}
		temp=A[min];
		A[min]=A[i];
		A[i]=temp;	
		}
	printf("Sorted array is....\n");
	for(i=0;i<n;i++)
		{
		printf("%d\t",A[i]);
		}	
	}
void main()
	{
	int i,n,A[20];
	printf("enter the total no of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&A[i]);
		}
	selection(A,n);	
	}	
