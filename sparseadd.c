#include<stdio.h>
void sparseadd(int a[20][3],int b[10][3]);
void main()	
	{
	int m,n,i,j,p,q,c[20][3],a[20][3],b[20][3];
	printf("enter the no of rows and columns of 1st matrix\n");
	scanf("%d %d",&m,&n);
	printf("enter the no of rows and columns of 2nd matrix\n");
	scanf("%d %d",&p,&q);
	printf("enter the elements of 1st matrix\n");
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
	printf("enter the elements of 2nd matrix\n");
	for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
	sparseadd(a,b);
	}

void sparseadd(int a[20][3],int b[20][3])
	{
	
	int m,n,p,q,i=1,j=1,k=1,na,nb,c[10][3];
	m=a[0][0];
	n=a[0][1];
	p=b[0][0];
	q=b[0][1];
	na=a[0][2];
	nb=b[0][2];
	if(m==p&&n==q)
		{
		printf("addn is possible");
		while(i<=na&&j<=nb)
			{
			if(a[i][0]<b[j][0])
				{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
				c[k][2]=a[i][2];
				i++;
				k++;
				}
			else if(a[i][0]>b[j][0])
				{
				c[k][0]=b[j][0];
				c[k][1]=b[j][1];
				c[k][2]=b[j][2];
				j++;
				k++;
				}
			else {
				if(a[i][1]<b[j][1])
				{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
				c[k][2]=a[i][2];
				i++;
				k++;
				}
			else if(a[i][1]>b[j][1])
				{
				c[k][0]=b[j][0];
				c[k][1]=b[j][1];
				c[k][2]=b[j][2];
				j++;
				k++;
				}
			else
				{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
				c[k][2]=a[i][2]+b[j][2];
				i++;
				j++;
				k++;
				}
			     }
			}
			while(i<=na)
				{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
				c[k][2]=a[i][2];
				i++;
				k++;
				}
			while(j<=nb)
				{
				c[k][0]=b[j][0];
				c[k][1]=b[j][1];
				c[k][2]=b[j][2];
				j++;
				k++;
				}
			c[0][0]=a[0][0];
			c[0][1]=a[0][1];
			c[0][2]=k-1;		
		}
	else
	printf("Addn not possible\n");
	printf("sum of sparse matrix is\n");
	for(i=0;i<k;i++)
		{
		for(j=0;j<3;j++)
			{
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}	
	
	}

