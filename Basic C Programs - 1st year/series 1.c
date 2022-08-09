#include<stdio.h>
#include<math.h>
#include<conio.h>

//series 1/(1+2) + 1/(3+4) + .... n terms

int main()
{
	int i,j,n,a=1,b=3 ;
	float sum;
	printf("Enter the range of the series:");
	scanf("%d", &n);
	if (n==1)
		{
		    sum=(float)(1.0/3.0);
			printf("\n The summation of the series is %f",sum);	
		}
		else
		{
			sum=(float)(1.0/3.0);
			for(i=2;i<=n;i++)
	        {
		        float res=0.0;
		        for(j=(i+1);j<=n*2;j++)
		        {
		        	int nj=j+(j+1);
					res =res + (float)1.0/(float)nj;
		        //	printf("\n res %f", res);
		        	j=j+1;
			        
		        }
		        
		            sum=(float)(sum+res);
		            printf("\n The summation of the series is: %f", sum);
		            break;
	
		    }
		   //printf("\n The summation of the series is %f",sum);
		}
		
	
	return 0;
}

