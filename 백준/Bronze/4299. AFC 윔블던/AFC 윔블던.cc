#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d %d", &a, &b);

	a -= b;

	if (a < 0) {
		printf("-1");
	}
	else {
		if (a % 2 == 0) {
			c = a / 2 + b;
			d = a / 2;
			printf("%d %d", c, d);
		}
		else {
			printf("-1");
		}
	}
}