#include "stdio.h"
#include "stdlib.h"

#define ARR_LEN 3

int main(void)
{
	int i, size;
	int arr[ARR_LEN] = {1, 2};
	size = sizeof(arr);
	printf("arr size: %d\n", size);
	for(i = 0; i < ARR_LEN; i++)
	{
		scanf("%d", &arr[i]);
		printf("%p --- %d\n", &arr[i], arr[i]);
	}
	exit(0);
}