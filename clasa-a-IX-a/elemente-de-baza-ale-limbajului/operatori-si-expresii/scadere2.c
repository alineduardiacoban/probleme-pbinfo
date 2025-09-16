#include <stdio.h>

int main()
{
	int a, b;
	if (scanf_s("%d %d", &a, &b) != 2)
	{
		return 1;
	}
	printf("%d", a - b);

}