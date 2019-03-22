#include<stdio.h>
float func(float x)
{
    return 1/(2+x);
}
 
float simpsons(float a, float b, float n)
{
    int i;
	float h = (b-a)/n;
	float s;
    for (i = 1; i < n; i++)
    {
    	if(i%2==0)
    	s=s+2*func(a+i*h);
    	else
    	s=s+4*func(a*i+h);
	}
        s=(h/3)*(func(a)+func(b)+s);
 	return s;
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
    printf("Value of integral is %6.4f\n",simpsons(x0, xN, n));
    return 0;
}
