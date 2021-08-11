#include<stdio.h>
int main() {
	int x, y, a, b;
	scanf_s("%d%d", &x, &y);
	a = 2 * x + y;
	b = 2 * y + x;
	if (x >= y)
		printf("%d", a);
	if (y > x)
		printf("%d", b);
	return 0;
}