#include<stdio.h>
long power(int base,int exp);
int main()
{
	int a,b;
	printf("Enter a base number: ");
	scanf("%d",&a);
	printf("Enter an exponent: ");
	scanf("%d",&b);
	long result =power(a,b);
	printf("Answer=%ld",result);
	return 0;
}
long power(int base,int exp)
{
	int i;
	long result=1;
	for(i=1;i<=exp;i++)
	{
		result= result*base;
	}
		return result;
}

