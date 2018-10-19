#include<stdio.h>
int main()
{
	int a[10][10] , b[10][10] , c[10][10];
	int n, i, j, k;
	
	printf("Enter the order of square matrix :\n");
	scanf("%d",&n);
	
	printf("\nEnter the elements of first matrix :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("Enter the elements of second matrix :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
     	} 
    }
	
	system("cls");
		
	printf("matrix A :\n");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("matrix B :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("sum of matrices :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	printf("difference of matrices :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	printf("Product of the matrices is :\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n-1;k++)
			{
				c[i][j] = a[i][k] * b[k][j] + a[i][k+1] * b[k+1][j] ;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
