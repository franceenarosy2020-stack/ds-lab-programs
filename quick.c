#include <stdio.h>
void QuickSort(int[],int,int);
int Partition(int[],int,int);
void Swap(int*,int*);
void main()
	{
	int n,a[100],i,j,low,high;
	printf("Enter the no.of elements of the array : ");
	scanf("%d",&n);
	printf("Enter the array : \n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	low=0;
	high=n-1;
	QuickSort(a,low,high);
	printf("Sorted array is : \n");
	for(i=0;i<n;i++)
		{
		printf("%d ",a[i]);
		}
	printf("\n");
	}

void QuickSort(int a[],int low,int high)
	{
	int q,i;
	if(low<high)
		{
		q=Partition(a,low,high);
		QuickSort(a,low,q-1);
		QuickSort(a,q+1,high);
		}

	}

int Partition(int a[],int low,int high)
	{
	int PI,BI,SI,t;
	PI=low;
	BI=low++;
	SI=high;
	while(SI>BI)
		{
		while(a[BI]<=a[PI])
			{
			BI++;
			}
		while(a[SI]>a[PI])
			{
			SI--;
			}
		if(BI<SI)
			{
			Swap(&a[BI],&a[SI]);
			}
		}
	Swap(&a[SI],&a[PI]);
	return SI;
	}

void Swap(int* x,int* y)
	{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	}
