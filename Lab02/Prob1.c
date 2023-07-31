#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y, z;
	printf("Enter three numbers: ");
	if(scanf("%d%d%d", &x, &y, &z)==3)
{
	printf("The sum of %d, %d, and %d, is: %d\n", x, y, z, x+y+z);
}
else
{
printf("Scanf() failed to fetch all input values\n");
}
	return EXIT_SUCCESS;
}
