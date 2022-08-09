#include <stdio.h>
int *p1, *p2, *p3;
void largestNumber()
 {
  if (*p1 > *p2) {
    if (*p1 > *p3)
	 {
      printf("%d is the largest number", *p1);
     } else
	 {
      printf("%d is the largest number", *p3);
     }
  } else 
    {
    if (*p2 > *p3)
	 {
      printf("%d is the largest number", *p2);
     } else
	  {
      printf("%d is the largest number", *p3);
      }
    }
}
int main() {
  int a, b, c;
  printf("Enter any three integer type values:\n");
  scanf("%d %d %d",&a,&b,&c);
  p1 = &a;
  p2 = &b;
  p3 = &c;
  largestNumber();
  return 0;
}
