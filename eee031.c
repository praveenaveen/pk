#include<stdio.h>
void main()
{
int num,r,sum=0,temp;
printf ("enter a num");
scanf ("%d",& num);
temp=num;
while (num!=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if (sum==temp)
printf("%d is an amstrong number ",temp);
else
printf("%d is not a amstrong number",temp);
}
