#include <math.h>
#include <stdio.h>
int main() 
{
 double a, b, c, discriminant, realPart, imagPart;
 printf("\nProblem is to find the imaginary roots of x^3=1");// x^3-1=0   or, (x-1)(x^2+x+1)=0
 
  printf("\n One real root of the equation is = 1"); //since from x^3=1, (x-1)=0 or x=1
  
  printf("\nFor the imaginary roots: -->\n ");
  
  printf("\n Enter coefficients of the quadratic part : "); //for imaginary part of root we take the quadratic equation (x^2+x+1) i.e ax^2+bx+c
  
 scanf("%lf %lf %lf", &a, &b, &c);
 discriminant =(b * b - 4 * a * c);
 realPart = -b / (2 * a);
 imagPart = sqrt(-discriminant) / (2 * a);
 printf("\n");
 printf("Root1 = %.2lf+%.2lfi and Root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
 return 0;
}
