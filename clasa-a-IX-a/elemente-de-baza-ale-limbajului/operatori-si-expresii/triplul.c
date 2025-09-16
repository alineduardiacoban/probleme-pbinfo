#include <stdio.h>

int main()
{
	int x, y, z=0; 
	if (scanf_s("%d %d", &x, &y) != 2)
	{
		return 1;
	}
	
	while (x + z != y * 3)
	{
		z++;
	}

	printf("%d", z);

}