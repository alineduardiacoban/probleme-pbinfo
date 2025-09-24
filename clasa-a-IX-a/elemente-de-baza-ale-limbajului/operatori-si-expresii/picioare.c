#include <stdio.h>

int main()
{
	int g, o;
	scanf_s("%d%d", &g, &o);

	int c = g+o;
	int p = 2 * g + 4 * o;

	printf("%d %d", c, p);

}