#include <stdio.h>
#include <stdlib.h>
#define STRSIZE 3

int main(void)
{
	char ctr[STRSIZE], c;
	int i;
	float f;
	// scanf("%d%f", &i, &f);
	scanf("%d", &i);
	c = getchar();
	scanf("%*c%c", &c);
	printf("%c", c);
	// scanf("%c", &c);
	scanf("%s", ctr);
	printf("i=%d\n", i);
	printf("ctr=%s\n", ctr);

	exit(0);
}