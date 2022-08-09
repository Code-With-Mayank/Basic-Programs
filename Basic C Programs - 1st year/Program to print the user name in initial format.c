#include<stdio.h>
#include<string.h>

void main()
{
  int i,h;
  char a[10],b[10],c[10];
 printf("Enter your first name\n");
 scanf("%s",&a[i]);
 printf("\nEnter your middle name\n");
 scanf("%s",&b[i]);
 printf("\nEnter your last name\n");
 scanf("%s",&c[i]);

 printf("\nDisplaying your name\n");
 printf("%c",a[0]);
 printf(".");
 printf("%c",b[0]);
 printf(".");
 printf(" ");
 h=strlen(c);

  for(i=0;i<=h;i++)
  {
  printf("%c",c[i]);
  }
}
