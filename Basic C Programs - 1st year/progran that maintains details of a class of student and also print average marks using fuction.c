#include<stdio.h>

struct class
{
    char name[25];
    int roll;
    float marks;
};
float average(struct class *s,int n)
{
    int i,x=0;
    float avg;
   for(i=0;i<n;i++)
   {
     x=s[i].marks+x;
   }
   avg=(x/n);
    return avg;
}

int main()
{
    int n,i;
    float avg;
    struct class s[5];
    printf("Enter the number of the student in a class:");
    scanf("%d",&n);
    fflush(stdin);
    printf("\n");
    for(i=0;i<n;i++)
{
    printf("Enter student name:",i+1);
    scanf("%[^\n]c",s[i].name);
    fflush(stdin);
    printf("Enter the student roll:",i+1);
    scanf("%d",&s[i].roll);
    fflush(stdin);
    printf("Enter student  marks:",i+1);
    scanf("%f",&s[i].marks);
    fflush(stdin);
    printf("\n");
}
printf("    Student name   \t Roll-number     Marks obtain\n");

for(i=0;i<n;i++)
{
  printf("%d.\t%s\t\t%d\t\t%0.2f\n",i+1,s[i].name,s[i].roll,s[i].marks);
}

avg=average(s,n);
printf("\nThe average marks of the class is: %0.3f",avg);
return 0;
}
