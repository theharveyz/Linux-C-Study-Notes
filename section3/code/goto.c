#include "stdio.h"
#include "stdlib.h"

int main(void)
{
	int a = 10, b = 1;

	loop:
		b++;
	if(a > b)
		goto loop;
	printf("%d\n", b);
	exit(0);
}