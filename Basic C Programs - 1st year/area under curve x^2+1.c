//Calculation of area under a curve: f(x) = x2+1
#include<stdio.h>
float calc_area(float x,float y,int N); //Function Prototype
int main()
{
int N;
float a,b,area;
printf("How many Trapezoids you want to add?\n");
scanf("%d",&N);
printf("Enter lower Limit and upper Limit:\n");
scanf("%f %f",&a,&b);
area = calc_area(a,b,N); //Function Call
printf("Area under f(x)=x^2+1 from x=%f to x=%f is %f.\n",a,b,area);
return(0);
}
float calc_area(float x, float y, int N) //Function Definition
{
int i;
float area = 0,h,h1,h2;
h = (y-x)/N; //Height of each trapezoid
printf("%f",h);
for(i=1; i<=N ; i++)
{
h1 = x*x + 1; //1st parallel side
x += h;
h2 = x*x + 1; //2nd parallel side
area += 0.5*(h1+h2)*h; //Area of each trapezoid
}
return(area);
}
