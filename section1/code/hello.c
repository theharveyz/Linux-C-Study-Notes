#include <stdio.h>  //引入标准IO库
#include <stdlib.h> //引入标准库：exit所在库

/**
 * 预编译注释
 */
#if 0
xx 此段不参与编译
#endif

int main(void)  //无需传参
{
	printf("hello world\n"); //返回值为输出内容的长度
	exit(0); //结束当前线程
}