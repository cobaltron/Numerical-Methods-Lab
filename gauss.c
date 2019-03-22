#include<stdio.h>
int main()
{
	int d,i,j,k,n;
	double x[100],s=0.00,a[100][100];
	printf("Enter the number equations:");
	scanf("%i",&n);
	printf("Enter the number of decimal points:");
	scanf("%i",&d); 
	printf("Enter the value of coefficients:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	printf("Enter the initiation values of variables:");
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&x[i]);
	}
	for(k=1;k<=15;k++)
	{
			for(i=1;i<=n;i++)
			{
				s=a[i][n+1];
				for(j=1;j<=n;j++)
				{
					if(j!=i)
					{
						s=s-(a[i][j]*   x[j]);
				 		x[i]=s/a[i][i];
					}
				}
			}
	}
	for(i=1;i<=n;i++)
		{
			printf("Value of x%d is %lf.\n",i,x[i]);
		}
	return 0;
}
