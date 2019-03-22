#include<stdio.h>
int main()
{
	int i,j,n=0;
	double mat[10][10];
	double x;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter values of x: \n");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&mat[i][0]);
	}
	printf("Enter values of y: \n");
	for(i=0;i<n;i++)
	{
		scanf("%lf",&mat[i][1]);
	}
	printf("Enter the value of x: ");
	scanf("%lf",&x);
	for(j=2;j<=n;j++)
	{
		for(i=0;i<=(n-j);i++)
		{
			mat[i][j]=(mat[i+1][j-1]-mat[i][j-1])/(mat[i+j-1][0]-mat[i][0]);
		}
	}
	double sum;
	int t1,t2;
	t1=1;
	sum=mat[0][1];
	for(j=2;j<=n;j++)
	{
		t1=t1*(x-mat[j-2][0]);
		t2=mat[0][j];
		sum=sum+(t1*t2);
	}
	
	printf("The value of y is %lf",sum);
	return 0;
}
	
