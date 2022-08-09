#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d;
	float x1,x2;
	
	printf("Input the values od a,b & c : ");
    scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("Both roots are equal. \n");
		x1= b/(2.0*a);
		x2=x1;
		printf("Root 1 = %f\n",x1);
		printf("Root 2 = %f\n",x2);
	}	
	else if(d>0)
	{
	 printf("Both roots are real and different. \n");
	 x1=(b+sqrt(d))/(2*a);
	 x2=(b-sqrt(d))/(2*a);	
	printf("Root 1 = %f\n",x1);
	printf("Root 2 = %f\n",x2);
	}
	else
	{
		printf("Roots are imaginary. \n  No Solutions.\n");
	}
	return 0;
}
