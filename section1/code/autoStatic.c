#include <stdio.h>
#include <stdlib.h>

int i = 100;

void foo(void)
{
	// auto int autoVar = 1;
	static int autoVar = 1;
	++autoVar;
	printf("%p->%d \n", &autoVar, autoVar);
}

int main()
{
	foo();
	foo();
	foo();

	int i = 10;
	{
		int i = 1;
		printf("i = %d\n", i);
	}
	exit(0);
}