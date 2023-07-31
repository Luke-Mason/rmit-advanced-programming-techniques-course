#include <string.h>
#include <stdio.h>
#define STRING_SIZE 10 

int main(void)
{

long int number;
char str[STRING_SIZE];
printf("Enter in number >> ");
fgets(str, STRING_SIZE + 2, stdin);
number = strtol(str, NULL, 10);
printf("%ld", number);

return 0;
}

