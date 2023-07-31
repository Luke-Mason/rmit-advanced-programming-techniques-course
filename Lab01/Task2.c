#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i;
int j;
int k;
int l=1;
	for(i=10;i>0;--i)
	{
		for(j=0;j<i;++j)
		{
			printf(" ");
			if(j==i-1)
			{
				for(k=0;k<l;++k)
				{
					printf("*");
				}
			++l;
			}
		}
	printf("\n");
	}
return EXIT_SUCCESS;
}

