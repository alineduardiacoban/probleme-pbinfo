#include <stdio.h>

int main()
{
	long long n;
	if (scanf_s("%lld", &n) != 1)
	{
		return 1;
	}

	long long perechi = (n * (n - 1)) / 2;

	printf("%lld", perechi);
}