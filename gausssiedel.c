#include<stdio.h>
#define max 50
#define e 0.00001/*e is the prescribed accuracy*/
main()
{
float a[max][max],x[max];
int n,i,j;
int gauss_seidel(float [][max],float [],int);
void printmat(float [][max],int);
printf("Enter the order of the matrix(n x n) : ");
scanf("%d",&n);
if(n>0)
{
/*The user enters the augmented matrix*/
printf("Enter the augmented matrix row wise :\n");
for(i=0;i<n;i++)
{
printf("Enter row \n");
for(j=0;j<(n+1);j++)
{
scanf("%f",&a[i][j]);
}
}

if(gauss_seidel(a,x,n))/*The gauss_seidel function return true value */
{
printf("The solutions of the given equations are->\n");
for(i=0;i<n;i++)
printf("tx[%d]=%10.2f\n",i+1,x[i]);
}
}
else
printf("No solution.");
}
/*Functions implemnts Gauss-Seidel on a system of equations*/
int gauss_seidel(float a[][max],float x[],int n)
{
int i,j,p=1;
float x1[max];
float s;
int diagonal_dominant(float [][max],int);
int converge(float [max],float [max],int);
if(!diagonal_dominant(a,n))/*Checking the diagonal dominant condition*/
{
printf("The system is not diagonally dominant.");
return 0;/*The solution cannot be obtained if system is not diagonal-dominant*/ 
}
/*Taking the initial approximation as zero*/
for(i=0;i<n;i++)
{
x1[i]=0;
x[i]=0;
}
do
{

p++;
for(i=0;i<n;i++)
{
s=0;
for(j=0;j<n;j++)
{
if(i!=j)
s+=a[i][j]*x[j];
}
x[i]=(a[i][n]-s)/a[i][i];

}
/*If the present result converges to the last result then we stop */
if(converge(x,x1,n))
break;
for(i=0;i<n;i++)
x1[i]=x[i];
}while(1);
printf("");
return 1;
}
float absolute(float x,float y)/*Returns the absolute value*/
{
float t=x-y;
if(t>0.0)
return t;
return (-1.0)*t;
}
/*Function checking diagonal-dominance*/
int diagonal_dominant(float a[][max],int n)
{
int i,j;
float s;
for(i=0;i<n;i++)
{
s=0;
for(j=0;j<n;j++)
{
if(i!=j)
s+=absolute(a[i][j],0.0);
}
if(absolute(a[i][i],0.0)<s)
return 0;
}
return 1;
}
/*Function checking convergence*/
int converge(float x[max],float x1[max],int n)
{
int i;
for(i=0;i<n;i++)
{
if(absolute(x[i],x1[i])>e)
return 0;
}
return 1;
}



