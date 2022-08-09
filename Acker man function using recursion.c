#include<stdio.h>
 long int A(long int m,long int n);
 
 int main()
 {
 	long int m,n;
 	printf("Enter two numbers for arguements: \n ");
 	scanf("%ld%ld",&m,&n);
 	printf("%ld is the final value of the function",A(m,n));
 	return 0;
 }
  long int A(long int m, long int n)
 {
 	if(m==0)
 	{
 		return n+1;
	 }
	 else if((m>0)&&(n==0))
	 {
	 	return A(m-1,1);
	 }
	 else 
	 {
	 	return A(m-1,A(m,n-1));
	 }
 }
