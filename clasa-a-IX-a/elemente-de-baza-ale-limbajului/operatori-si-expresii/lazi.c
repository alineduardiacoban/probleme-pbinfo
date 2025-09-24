#include <stdio.h>

int main()
{
	int l, h;
	scanf_s("%d %d", &l, &h);

	int n = h / l;

	printf("%d", n);
}