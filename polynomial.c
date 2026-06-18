#include<stdio.h>
#include<stdlib.h>
void polyadd(int a[50][2],int b[50][2],int n,int m);
void polymulti(int a[50][2],int b[50][2],int n,int m);
void sort(int c[100][2],int k);
void main()
{
	int i,j,n,a[50][2],b[50][2],m,p;
	printf("enter the no of terms of first polynomial \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the coefficient and exponenetial of %d term\n",i+1);
		scanf("%d %d",&a[i][0],&a[i][1]);
	}
	printf("enter the no of terms of the second polynoimal\n");
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		printf("enter the coefficient and exponenetial of %d term\n",i+1);
		scanf("%d %d",&b[j][0],&b[j][1]);
	}
	while(1)
	{
		printf("choose the choice\n 1.POLYNOMIAL ADDITION\n2. POLYNOMIAL MULTIPLICARTION\n 3.EXIT\n");
		scanf("%d",&p);
		switch(p)
		{
			case 1:
			polyadd(a,b,n,m);
		        break;
		        case 2:
		        polymulti(a,b,n,m);
		        break;
		        default:
		        exit(0);
		        break;
		}
	}
}
	void polyadd(int a[50][2],int b[50][2],int m,int n)
		{
		int c[50][2],i= 0,j=0,k=0;
		while(i<n&&j<m)
			{
			if(a[i][1]==b[j][1])
				{
			        c[k][0] = a[i][0]+b[j][0];
			        c[k][1] = a[i][1];
			        i++;
			        j++;
			        k++;
				}
			else if(a[i][1]>b[j][1])
				{
				c[k][0] = a[i][0];
			        c[k][1] = a[i][1];
			        i++;
			        k++;
				}
			else
				{
				c[k][0] = b[j][0];
			        c[k][1] = b[j][1];
			        j++;
			        k++;
				}		
			}
		for( ;i<n;i++)
			{
			c[k][0] = a[i][0];
			c[k][1] = a[i][1];
			k++;
			}
		for( ;j<m;j++)
			{
			c[k][0] = b[j][0];
			c[k][1] = b[j][1];
			k++;
			}
		printf("Sum of polynomials\n");
		for(i=0;i<k;i++)
			{
			printf("%dx^%d",c[i][0],c[i][1]);
			if(i<(k-1))
			{
			printf(" + ");
			}
			}
		}
	void polymulti(int a[50][2],int b[50][2],int n,int m)
	{
	int i,j,t,k=0,exist=0,newco,newex,c[100][2],tempex,tempco;
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
	newco=a[i][0]*b[j][0];
	newex=a[i][1]+b[j][1];
	for(t=0;t<k;t++)
	{
	exist=0;
	if(c[t][1]==newex)
	{
	exist=1;
	break;
	}
	}
	if(exist)
	{
	c[t][0]=c[t][0]+newco;
	}
	else
	{
	c[k][0]=newco;
	c[k][1]=newex;
	k++;
	}
	}
	}
	
	for(i=0;i<k;i++)
	{
	for(j=0;j<k-1;j++)
	{
	if(c[j][1]<c[j+1][1])
	{
	tempex=c[j][1];
	tempco=c[j][0];
	c[j][1]=c[j+1][1];
	c[j][0]=c[j+1][0];
	c[j+1][1]=tempex;
	c[j+1][0]=tempco;
	}
	}
	}
	
	
	
	
	printf("polynomial prdt is\n");
		for(i=0;i<k;i++)
			{
			printf("%dx^%d",c[i][0],c[i][1]);
			if(i<(k-1))
			{
			printf(" + ");
			}
	}
	}
	
	
		
