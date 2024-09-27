#include <stdio.h>
#include "clac.h"

int main(void) {
	double x = 2,
		y = 0;

	printf("x : %.1f + y : %.1f = %.1f\n", x, y, sum(x, y));
	printf("x : %.1f - y : %.1f = %.1f\n", x, y, sum(x, y));
	printf("x : %.1f * y : %.1f = %.1f\n", x, y, mul(x, y));
	printf("x : %.1f / y : %.1f = %.6f\n", x, y, div(x, y));
	printf("x : %d %% y : %d = %d\n",
		(int)x, (int)y, rem((int)x, (int)y));

	//�߰� �κ�
	printf("x : %.1f ^ y : %.1f\n", power(x, y));
	printf("sqrt of x : %.1f = %.1f\n", x, squareRoot(x));
	printf("area of y : %.1f = %.1f\n", y, area0fCircle(y));
	printf("circ of y : %.1f = %.1f\n", y, circumfrence0fCircle(y));

	return 0;
}
