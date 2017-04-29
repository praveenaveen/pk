#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,S,bs,h,area;
printf("enter the values of bs,h");
scanf("%d%d",&bs,&h);
area=0.5*bs*h;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
S=(a+b+c)/2;
area=sqrt(S*(S-a)*(S-b)*(S-c));
printf("area of triangle=%d",area);
}
