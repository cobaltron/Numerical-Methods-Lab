#include<stdio.h>
float func(float x,float y)
{
	return ((x-y)/(x+y));
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
	float k1,k2,k3,k4,k;
	for(i=0;i<iter;i++)
	{
		k1=h*func(x,y);
		k2=h*func(x+h/2,y+(k1/2));
		k3=h*func(x+h/2,y+(k2/2));
		k4=h*func(x+h,y+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		x=x+h;
		y=y+k;
	}
		printf("The estimated value of y is :%lf",y);
}
