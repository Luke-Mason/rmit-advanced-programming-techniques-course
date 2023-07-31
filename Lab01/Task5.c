#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i;
	int j;
	int k;
	for(i=0;i<5;++i)
	{
		for(j=0;j<10;++j)
		{
			printf("* ");
		}
		printf("*\n");
		for(k=0;k<10;++k)
		{
			printf(" *");
		}
		printf(" \n");
	}
	for(j=0;j<10;++j)
	{
		printf("* ");
	}
	printf("*\n");
return 0;
}

