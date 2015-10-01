#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 5
int main(void)
{
	char str[STRSIZE];
	char c;
	// c = getchar();
	// putchar(c);
	gets(str);
	puts(str);
	exit(0);
}