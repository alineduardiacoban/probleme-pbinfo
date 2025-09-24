#include <stdio.h>

int main()
{
	int r, g, b;
	if (scanf_s("%d%d%d", &r, &g, &b) != 3) 
	{
		return 1;
	}

	printf("%d %d %d", 255 - r, 255 - g, 255 - b);
}