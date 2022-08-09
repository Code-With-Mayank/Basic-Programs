#include <iostream>
using namespace std;
int main()
{
// Variable declaration
int n1, n2, n3 , max;
printf("Enter the three numbers=\n");
scanf("%d %d %d", &n1,&n2,&n3);
// Largest among n1, n2 and n3
max = (n1 > n2) ?
(n1 > n3 ? n1 : n3) :
(n2 > n3 ? n2 : n3);
// Print the largest number
cout << "Largest number among "
<< n1 << ", " << n2 << " and "
<< n3 << " is " << max << "." ;return 0;
}

