#include<stdio.h>
float func(float x)
{
    return 1/x;
}
 
float trapezoidal(float a, float b, float n)
{
    int i;
	float h = (b-a)/n;
 	float s = func(a)+func(b);
    for (i = 1; i < n; i++)
        s += 2*func(a+i*h);
 	return (h/2)*s;
}
 
int main()
{
	int x0,xN,n;
    printf("Enter a: ");
    scanf("%d",&x0);
    printf("Enter b: ");
    scanf("%d",&xN);
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Value of integral is %6.4f\n",trapezoidal(x0, xN, n));
    return 0;
}
