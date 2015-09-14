#include <stdio.h>
#include <stdlib.h>
#include "fp.h"   //必须为双引号

static int i = 10;
int EXTERN = 1000;
int main(void)
{
	printf("[%s]:%d:%d\n", __FUNCTION__, i, EXTERN);
	callStaticFunc();
	exit(0);
}