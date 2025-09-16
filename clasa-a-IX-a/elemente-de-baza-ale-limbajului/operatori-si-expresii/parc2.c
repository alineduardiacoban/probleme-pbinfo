#include <stdio.h>

int main()
{
	int n; 
	if (scanf_s("%d", &n) != 1)
	{
		return 1;
	}
	printf("%d", n * n * n * n * n);
}