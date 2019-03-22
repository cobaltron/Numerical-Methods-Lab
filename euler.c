#include<stdio.h>

float func(float x,float y)
{
	return (-2*x-y);
}
void main()
{
	double x0=0.0,y0=0.0,h=0.0,xn=0.0,yn=0.0;
	double x=0.0,y=0.0;
	float i=0.0;
	printf("Enter x(0):");
	scanf("%lf",&x0);
	printf("Enter y(0):");
	scanf("%lf",&y0);
	printf("Enter stepsize:");
	scanf("%lf",&h);
	printf("Enter x(n):");
	scanf("%lf",&xn);
	x=x0;
	y=y0;
	float iter=(xn-x0)/h;
	for(i=0;i<iter;i++)
	{
		y=y+h*func(x,y);
		x=x+h;
	}
	printf("The estimated value of y is :%lf",y);
} 
		
	
