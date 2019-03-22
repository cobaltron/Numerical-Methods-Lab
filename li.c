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
	double sum;
	double t1,t2;
	sum=0.0;
	t1=1;
	int c=0;
	for(i=0;i<n;i++)
	{
		t1=1.0;t2=1.0;
		for(j=0;j<n;j++)
		{
			if(i==j)
				continue;
			else
			{	
				t1=t1*(x-mat[j][0]);
				t2=t2*(mat[i][0]-mat[j][0]);
			}
		}
		sum=sum+mat[i][1]*(t1/t2);
	}
	
	printf("The value of y is %lf",sum);
	return 0;
}
