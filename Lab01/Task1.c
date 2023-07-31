#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i;
int j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<i;++j)
		{
			printf("*");
		}
	printf("\n");
	}
return EXIT_SUCCESS;
}

