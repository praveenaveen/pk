#include<stdio.h>
void main()
{
tower(num,'a','b','c');
}
void towers(int num;char from peg;char to peg;char aux peg);
{
if(num==1)
{
printf("move disk 1 from peg %c to peg %c",from peg,to peg);
return;
}
towers(num-1,from peg,aux peg,to peg);
printf("move disk %d from peg %c to peg %c",from peg,to peg);
towers(num-1,aux peg,from peg);
pritf("move disk %d from peg %c t opeg %c",from peg,to peg);
}
