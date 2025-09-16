#include <stdio.h>

int main()
{
	int c;
	if (scanf_s("%d", &c) != 1) {
		return 1;
	}
	printf("%d", c + c * 2 + (c * 2) * 2);
}