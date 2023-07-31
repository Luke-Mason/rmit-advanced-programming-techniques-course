#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i;
int j;
int k;
int l=1;
int m=0;
int n=17;
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
			++l;
			}
		}
	m=1;
	printf("\n");
	}
if(m==1)
{
	for(i=2;i<11;++i)
	{
		for(j=0;j<i;++j)
		{
			printf(" ");
		}
		for(k=0;k<n;++k)
		{
			printf("*");
		}
	n = n-2;
	printf("\n");
	}
}
return EXIT_SUCCESS;

}

