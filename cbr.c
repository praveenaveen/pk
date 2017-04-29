#include<stdio.h>
void swap(int*,int*);
int main()
{
int x,y;
printf("enter the values of x,y\n");
scanf("%d%d",&x,&y);
printf("before swapping \n x=%d\n y=%d\n",x,y); 
swap(&x,&y);
printf("after swapping \n x=%d\n y=%d\n",x,y);
return 0;
}
void swap(int*a,int*b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
