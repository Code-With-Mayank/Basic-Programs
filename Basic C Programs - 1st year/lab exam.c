#include <stdio.h>
int main() 
{  
    char x;
    printf("ENTER A CHARACTER : \n");
    scanf("%c", &x);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    //%u displays the address of a character
    printf("\n ASCII value of %c =  %d", x, x);
    printf("\n %c is stored at address %u\n",x,&x);
    
    return 0;
}
