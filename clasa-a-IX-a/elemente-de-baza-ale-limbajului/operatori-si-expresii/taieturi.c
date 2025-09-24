#include <stdio.h>

int main()
{
	long long n, m;
	if (scanf("%lld%lld", &n, &m) != 2)
	{
		return 1;
	}

	long long S = n * m - 1;

	printf("%lld", S);

}