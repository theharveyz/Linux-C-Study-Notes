#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 13;
	printf("%d\n", (i & ~ (1 << 2)));
	exit(0);
}