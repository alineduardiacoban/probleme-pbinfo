#include <stdio.h>

int main()
{
	int F, B, n;
	if (scanf_s("%d %d %d", &F, &B, &n) != 3) {
		return 1; 
	}
	printf("%d", F * 3 * n + B * 2 * n);
}


