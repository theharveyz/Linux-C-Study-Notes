#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#define DAFFODILS_MAX 1000
//百钱买百鸡
void daffodils(void)
{
	int x,y,z;
	//水仙花数是指一个 n 位数 ( n≥3 )，它的每个位上的数字的 n 次幂之和等于它本身
	
}

char loopInput(void)
{
	char init;
	loop:
		scanf("%c", &init);
	if(init == '0')
	{
		printf("%c\n", init);
		return init;
	}
	else
	{
		goto loop;
	}

}

int main(void)
{
	loopInput();
	exit(0);
}