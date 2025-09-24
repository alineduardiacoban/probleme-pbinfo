#include <stdio.h>

int main()
{
	int n, m;
	if (scanf_s("%d%d", &n, &m) != 2)
	{
		return 1;
	}
	
		int I = m / n;
	
	printf("%d", I);

}