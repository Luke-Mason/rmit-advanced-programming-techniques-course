#include <string.h>
#include <stdio.h>
#define STRING_SIZE 30 

int main(void)
{

char token1[100], token2[100], token3[100], token4[100], token5[100];
long int number;
char str[STRING_SIZE];
printf("Enter in numbers seperated via \",\" >> ");
fgets(str, STRING_SIZE + 2, stdin);

if(sscanf(str,"%s%s%s%s%s",token1, token2, token3, token4, token5) =! 5)
{
printf("sscanf failed. \n\n");
exit(EXIT_FAILURE);
}

number = strtol(str, NULL, 10);
printf("%ld", number);
return 0;
}

