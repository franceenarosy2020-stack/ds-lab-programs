#include<stdio.h>
void binarysearch(int A[50],int n,int key)
{
	int mid,flag=0,low = 0,high = n-1;
	while(low<=high)
	{
	mid=(low+high)/2;
	if(A[mid]==key)
		{
		flag=1;
		break;
		}
	else if(A[mid]>key)
		{
		high=mid-1;
		}
	else
		low=mid+1;
	}
	if(!flag)
	printf("key is not found\n");
	else
	printf("key is found at %d\n",mid+1);
}
void main()
{
	int A[50],i,j,n,key,temp;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&A[i]);
		}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(A[j]>A[j+1])
			{
			temp = A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
			}
		}
	}
	printf("After sorting...\n");
	for(i=0;i<n;i++)
		{
		printf("%d\t",A[i]);
		}	
	printf("\nEnter the key element\n");
	scanf("%d",&key);
	binarysearch(A,n,key);		
	
}
	
