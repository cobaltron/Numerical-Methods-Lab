#include<stdio.h>
void main(){
int mat[10][10],n,i,j,k,d=1,t;
printf("Enter order of the matrix\n");
scanf("%d",&n);
printf("Enter the elements of the matrix\n");
for(i=0;i<=n-1;i++){
for(j=0;j<=n-1;j++){
scanf("%d",&mat[i][j]);
}
}
printf("The given matrix is\n");
int a,b;
for(a=0;a<=n-1;a++){
for(b=0;b<=n-1;b++){
printf("%d ",mat[a][b]);
}
printf("\n");
}
printf("\n");
for(i=0;i<n;i++)
    { 
    	for(j=0;j<n;j++)
    	{
    		if(j>i)
			{
    		t=mat[j][i]/mat[i][i];
    		for(k=0;k<n;k++)
    		{
    			mat[j][k]=mat[j][k]-(mat[i][k]*t);
    		}
    	}
	}
  }
	for(i=0;i<n;i++)
		d=d*mat[i][i];
for(a=0;a<=n-1;a++){
for(b=0;b<=n-1;b++){
printf("%d ",mat[a][b]);
}
printf("\n");
}
printf("The Determinant is %d",d);
}
