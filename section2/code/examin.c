#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef WEIGHT
#define WEIGHT 3.0e-23
#endif

#ifndef KQ
#define KQ 950
#endif


static void waterNum(void)
{
	float num, sum;
	printf("Plase input for num : ");
	scanf("%f", &num);
	sum = num * KQ / WEIGHT;
	printf("total is %e\n", sum);
}

static void area(void)
{
	float a,b,c,p,area;

	printf("please input num:\n");
	scanf("%f%f%f", &a, &b, &c);
	if( a + b <= c || b + c <= a || a + b <= c)
	{
		fprintf(stderr, "input error\n");
		exit(1);
	}
	p = 1.0 / 2 * ( a + b + c );
	area = sqrt( p * ( p - a ) * ( p -b ) * ( p - c ) );
	printf("area = %f\n", area);
	exit(0);
}

int main(void)
{
	// waterNum();
	area();
	exit(0);
}