#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

int main(void)
{
	printf("BEFORE[%s:%d]\n", __FUNCTION__, __LINE__);
	// while(1);
	sleep(3);
	printf("AFTER[%s:%d]\n", __FUNCTION__, __LINE__);
	exit(0);
}