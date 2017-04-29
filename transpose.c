#include<stdio.h>
#include<math.h>
void main()
{
int m,n,i,j,a[10][10],b[10][10];
printf(" enter no.of rows and columns of matrix\n");
scanf("%d%d",&m,&n);
printf("enter elements of matrix\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
b[i][j]=a[j][i];
printf("%d ",b[i][j]);
}
printf("\n");
}
} 
