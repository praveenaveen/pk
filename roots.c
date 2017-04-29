#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float r1,r2,d;
printf("enter the values of a,b,c \n");
scanf("%d%d%d",&a,&b,&c);
d=(b*b-4*a*c);
if(d==0)
{
printf("roots are real and same \n");
r1=r2=-b/(2*a);
printf("r1=%f \t r2=%f \t \n",r1,r2);
}
if(d>0)
{
printf("roots are real and distinct \n");
r1=(-b-sqrt(d))/(2*a);
r2=(-b+sqrt(d))/(2*a);
printf("r1=%f \t r2=%f \t \n",r1,r2);
}
if (d<0)
{
printf("roots are imaginary \n");
r1==-b/(2*a);
r2== sqrt(-d)/(2*a);
printf("r1= %f+i%f \n",r1,r2);
printf("r2= %f-i%f \n",r1,r2);
}
}  
