#include<stdio.h>
 
void TOH(int,char,char,char);
 
void main()
{
int n;
printf("\t\t---- TOWER OF HANOI PROBLEM--------\n\n");
printf("How many plates --->  ");
scanf("%d",&n);
TOH(n,'A','B','C');
}
 
void TOH(int n,char x,char y,char z)
{
if(n>0)
{
TOH(n-1,x,z,y);
printf("\n%c -> %c",x,y);
TOH(n-1,z,y,x);
}
}
