#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float f = 123.81;
	long d = 12345;
	printf("%-8.1fHAHA\n", f);
	printf("%.1f\n", f);
	printf("%lld\n", 112312312LL);
	printf("%ld\n", d);
	// printf("%ld\n", d, f);
	exit(0);
}