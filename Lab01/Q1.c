#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int miles, yards;
	float kilometres;
	yards = 26;
	miles = 365;
	kilometres = 1.609 * (miles + yards / (float)1760);
	printf("%d miles, %d yards = %lf kilometres\n", miles, yards, kilometres);
	return EXIT_SUCCESS;
}


