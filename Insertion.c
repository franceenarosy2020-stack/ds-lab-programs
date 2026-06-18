#include<stdio.h>
void Insertion(int A[20],int n)
	{
	int i,j,temp;
	for(i=1;i<n;i++)
		{
		temp = A[i];
		for(j=i;j>0&&A[j-1]>temp;j--)
			{
			A[j]=A[j-1];
			}
		A[j]=temp;	
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
	Insertion(A,n);	
	}	
