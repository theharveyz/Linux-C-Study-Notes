#include "stdio.h"
#include "stdlib.h"

#define MAX 10
int main(void)
{
	int a = 0;
	for(;;)
	{
		if(a > MAX)
			break;
		else
			a++;
		printf("%d\n", a);
	}
	exit(0);
}