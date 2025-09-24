#include <stdio.h>

int main()
{
	int z, n;
	if (scanf_s("%d%d", &z, &n) != 2)
	{
		return 1;
	}
	printf("%d", n / z);
}