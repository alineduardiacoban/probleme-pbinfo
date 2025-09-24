#include <stdio.h>

int main()
{
	long long n, m;
	if (scanf_s("%lld%lld", &n, &m) != 2)
	{
		return 1;
	}

	printf("%lld", n);
}