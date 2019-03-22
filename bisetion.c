#include<stdlib.h>
#include<stdio.h>
#include<math.h>
float func(float x)
{
	return x*x*x - x*x + 2;
}

void main()
{
	int i,n;
	float iter;
	float a,b;
	printf("Enter lower bound: ");
	scanf("%f",&a);
	printf("Enter upper bound: ");
	scanf("%f",&b);
	printf("Enter accuracy: ");
	scanf("%f",&iter);
	double c = a;
    while ((b-a) >=iter)
    {
        c = (a+b)/2;
        if (func(c) == 0.0)
            break;
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
	printf("The root of the function is %lf",c);
}
	
		
		
	

