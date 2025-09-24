#include <stdio.h>

int main()
{
	int x, y, n;
	scanf_s("%d%d%d", &x, &y, &n);

	int ani = n / (x*y);
	int ore_ramase = n % (x*y);
	
	int zile = ore_ramase / y;
	int ore = ore_ramase % y;

	printf("%d\n%d\n%d", ani, zile, ore);

}