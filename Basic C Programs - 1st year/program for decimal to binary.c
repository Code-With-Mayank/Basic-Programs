#include <stdio.h>
long integral(long  m);
void fractional(float n);
int main()
{
   
    long m,bIntegral;
	float Binary,n;
    printf("Enter the integral part of decimal number: ");
    scanf("%ld",&m);
    printf("Enter the fractional part of decimal number with decimal point on front: "); //Enter with decimal point
    scanf("%f",&n);
    bIntegral = integral(m);
    printf("Equivalent binary value: %d.",bIntegral);
    fractional(n);
    return 0;
}

long integral(long m)
{
   long Factor=1,remainder,sum=0;	
    while(m!=0)
	{
         remainder=m%2;
         sum=sum+remainder*Factor;
         m=m/2;
         Factor=Factor*10;
    }
    return sum;
}

void fractional(float n)
{
 int sum=0,i=0,temp,Factor=10;
 while(n!=0)
   {     
       n = n * 2.0;
       temp = (int)n;
        n = n - temp;
       printf("%d",temp);
       i++;
       if(i==10)
       break;
   }
}


