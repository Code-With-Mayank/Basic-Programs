
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
 {
int a[10][10],b[10][10],c[10][10],transpose[10][10];
int i,j,k,x,y,p,q;

// declaring user define 2d array by taking datas from user

printf("\ Enter the size of Matrix A:");
scanf("%d%d", &x,&y);
printf("\ Enter the size of Matrix B:");
scanf("%d%d", &p,&q);

if(x!=p)
 {
 	printf("Matrix Multiplication not possible."); //condition if both array row number not same multiplication not possible.
exit(0);
 }
printf(" Enter the Matrix A values:\n");
for(i=0;i<x;i++)
for(j=0;j<y;j++)
scanf("%d",&a[i][j]);
printf(" Enter the Matrix B values:\n");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);

//displaying the matrix

printf("\n The Matrix A is\n");
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
printf(" %d",a[i][j]);
printf("\n");
}
printf("\n The Matrix B is\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
printf(" %d",b[i][j]);
printf("\n");
}

//performing matrix multiplication

for(i=0;i<x;i++)
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<y;k++)
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
printf("\n The Output Matrix C is\n");
for(i=0;i<x;i++)
{
for(j=0;j<q;j++)
printf(" %d",c[i][j]);
printf("\n");
}
 
 //finding transpose of the resultant matrix
 
 for(i=0;i<x;i++)
 for(j=0;j<q;j++)
 transpose[j][i]= c[i][j];
 
 printf("Transpose of the resultant matrix:\n");
 
 for(i=0;i<q;i++)
 {
 for(j=0;j<x;j++)
 printf("%d\t", transpose[i][j]);
 printf("\n");
}

return 0;
}
 
