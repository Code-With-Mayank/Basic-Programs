#include<stdio.h>
int main()
{
	int temp,ul,ll,num,rev,rem,i;
	printf("Enter the upper limit");
	scanf("%d",&ul);
	printf("Enter the lower limit");
	scanf("%d",&ll);
	printf("Palindrome numbers between %d and %d are:",ll,ul);
	for(i=ll;num<=ul;i++)
	{
temp=num;
rev=0;
while(temp)
{
rem=temp%10;
temp=temp/10;
rev=rev*10+rem;
}
if(num==rev)
printf("%d",num);
	}
	return 0;
}
