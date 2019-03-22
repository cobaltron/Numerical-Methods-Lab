#include<stdio.h>
void main()
{
int mat[3][3],A=0,B=0,x=0,m=2;
int i,j,a,b,y,n;
printf("Enter the elements of the matrix\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&mat[i][j]);
}
}
printf("\r");
printf("The given matrix is\n");
for(a=0;a<=2;a++)
{
for(b=0;b<=2;b++)
{
printf("%d ",mat[a][b]);
}
printf("\n");
}
for(y=0;y<=2;y++){
A = A + mat[x][y%3]*mat[x+1][(y+1)%3]*mat[x+2][(y+2)%3];
}
for(n=0;n<=2;n++){
B = B + mat[m][n%3]*mat[m-1][(n+1)%3]*mat[m-2][(n+2)%3];
}
printf("The determinant is %d\n",A-B);
}

