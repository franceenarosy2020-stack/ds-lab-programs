#include<stdio.h>
void sparsemulti(int a[20][3],int b[20][3],int n,int m,int p,int q,int x,int y);
void main()	
	{
	int m,n,i,j,p,q,x,y,c[20][3],a[20][3],b[20][3];
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
	for(i=0;i<p;i++)
		{
		for(j=0;j<q;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
	x = a[0][2];
	y = b[0][2];
	sparsemulti(a,b,n,m,p,q,x,y);
	}

void sparsemulti(int a[20][3],int b[20][3],int n,int m,int p,int q,int x,int y)
	{
	int c[50][3],i,j,k=1,t,exist;
	if(n==p)
		{
		printf("Multiplication possible!\n");
		for(i=1;i<=x;i++)
			{
			for(j=1;j<=y;j++)
				{
				if(a[i][1]==b[j][0])
					{
					for(t=0;t<k;t++)
						{
						exist = 0;
						if((c[t][0]==a[i][0])&&(c[t][1]==b[j][1]))
							{
							exist=1;
							c[t][2]=c[t][2]+(a[i][2]*b[j][2]);
							break;
							}	
						}
					if(exist==0)
						{
						c[k][0]=a[i][0];
						c[k][1]=b[j][1];
						c[k][2]=a[i][2]*b[j][2];
						k++;
						}		
					}
				}
			}
	c[0][0]=a[0][0];
	c[0][1]=b[0][1];
	c[0][2]=k-1;
	printf("product of sparse matrix is\n");
	for(i=0;i<k;i++)
		{
		for(j=0;j<3;j++)
			{
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
	}
	else
	printf("multiplication not possible\n");
	}

