#include <stdio.h>

int main()
{
	int t1, t2, n, m, z;
	if (scanf_s("%d %d %d %d %d", &t1, &t2, &n, &m, &z) != 5)
	{
		return 1;
	}
	printf("%d", n * t1 * z + m * t2 * z);
}