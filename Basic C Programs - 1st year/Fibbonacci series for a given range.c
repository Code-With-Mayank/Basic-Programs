#include<stdio.h>
 
 int main()
 {
 	int a=0,b=1,c,i,n;
 	printf("Enter the number range: ");
 	scanf("%d",&n);
 	printf("\n Fibbonacci series is :\t%d\t%d",a,b);
 	for(i=2;i<=n;i++)
 	{
 		c=a+b;
 		printf("\t %d", c);
 		a=b;
 		b=c;
	 }
return 0;
 }
