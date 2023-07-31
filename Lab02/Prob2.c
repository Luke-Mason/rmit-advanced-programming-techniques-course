#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define UNDERLINE for(i = 0; i<5;i++) printf("%s","--------"); printf("\n")
int main(void)
{
int a;
int i;
int x;
printf("Enter in an integer >> ");
scanf("%d",&a);
printf("\n%-8s%-8s%-8s%-8s%-8s\n", "Number", "Square", "Cube", "Quartic", "Quintic");
UNDERLINE;
for(i = 0;i<=a;i++)
{

x=i;
printf("%-8d",x);
x=pow(i,2);
printf("%-8d",x);
x=pow(i,3);
printf("%-8d",x);
x=pow(i,4);
printf("%-8d",x);
x=pow(i,5);
printf("%-8d\n",x);
}
UNDERLINE;
return EXIT_SUCCESS;

}
