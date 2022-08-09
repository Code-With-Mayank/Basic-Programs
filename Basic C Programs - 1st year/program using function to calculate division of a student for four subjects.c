 #include <stdio.h>
float division (float s)
{
	float percentage ;
	percentage =(s/400)*100;
	return (percentage);
}
main()
{
	float p , c , m , com ,percent , t ;
	printf("ENTER THE MARKS OBTAINED IN PHYSICS ");
	scanf("%f",&p);
	printf("\nENTER THE MARKS OBTAINED IN CHEMISTRY  ");
	scanf("%f",&c);
	printf("\n ENTER THE MARKS OBTAINED IN MATHS ");
	scanf("%f",&m);
	printf("\nENTER THE MARKS OBTAINED IN COMPUTER ");
	scanf("%f",&com);
	t = p+c+m+com ;
	percent = division (t);
	printf("\n THE TOTAL MARKS OBTAINED IS = %3f",t);
	if(percent>=75)
	printf("\nDIVISION 1");
	else if ((percent<75) && (percent>=65))
	printf("\nDIVISION 2");
	else if ((percent<65) && (percent>=50))
	printf("\nDIVISION 3");
	else
	printf("\n FAILED ");
}
