#include <stdio.h>
#include <stdlib.h>

void star(int i)
{
	for(int a = i; a <= 5; a++)
	{
		printf("*");
	}
	printf("\n");
}

int main(void)
{
	int i = 1;
	for(int a = i; a <= 5; a++)
	{
		star(a);
	}

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(double));
	exit(0);
}