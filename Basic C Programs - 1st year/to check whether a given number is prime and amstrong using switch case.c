#include <stdio.h>
int main()
{
 int ch;
 
 printf("Press 1 to check for PRIME, Press 2 to check for ARMSTRONG: \n");
 scanf("%d", &ch);
switch(ch)
{
case 1: 
{
 int n, i, flag = 0;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 for (i = 2; i <= n / 2; ++i) {
 // condition for non-prime
 if (n % i == 0) {
 flag = 1;
 break;
 } }
 if (n == 1) {
 printf("1 is neither prime nor composite.");
 } 
 else {
 if (flag == 0)
 printf("%d is a prime number.", n);
 else
 printf("%d is not a prime number.", n);
 }
break;
}
case 2:
 {
int num, originalNum, remainder, result = 0;
 printf("Enter a three-digit integer: ");
 scanf("%d", &num);
 originalNum = num;
 while (originalNum != 0)
{
 // remainder contains the last digit
 remainder = originalNum % 10;
 
 result += remainder * remainder * remainder;
 
 // removing last digit from the orignal number
 originalNum /= 10;
 }
 if (result == num)
 printf("%d is an Armstrong number.", num);
 else
 printf("%d is not an Armstrong number.", num);
 
}
break;
}
 return 0;
}
