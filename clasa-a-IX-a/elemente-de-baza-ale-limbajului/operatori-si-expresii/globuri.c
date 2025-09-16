#include <stdio.h>

int main()
{
	int a;
	if (scanf_s("%d", &a) != 1) {
		return 1;
	}
	printf("%d", a + a * 2 + a * 2 - 3);
}