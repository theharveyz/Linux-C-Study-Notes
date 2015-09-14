#include <stdio.h>
#include <stdlib.h>
#include "fp.h"

static int i = 100;
extern int EXTERN;
static void func(void)
{
	printf("[%s]:%d:%d\n", __FUNCTION__, i, EXTERN);
}

void callStaticFunc(void)
{
	func();
}