#include <stdio.h>
#include <stdlib.h>

// #define MAX(a, b) ((a) > (b) ? (a) : (b))  //遇到a++的情况，因为是完全替换，所以可能会造成a执行两次++
#define MAX(a, b) \
		({typeof(a) A = a, B = b; (A) > (B) ? (A) : (B);})  //整体用()包裹,内部表达式用{}包裹; 别忘记加;

#if 0
int max(int a, int b)
{
	return a > b ? a : b;
}
#endif 
int main()
{	
	int a = 5, b = 3;
	printf("%d\t%d\n", a, b);
	printf("%d\n", MAX(a++, b++));
	// printf("%d\n", max(a++, b++));
	printf("%d\t%d\n", a, b);
	exit(0);
}