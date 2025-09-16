#include <stdio.h>

int main() {
	int x, y;
	if (scanf_s("%d %d", &x, &y) != 2)
	{
		return 1;
	}
	printf("%d", (x + y) % 10);
}