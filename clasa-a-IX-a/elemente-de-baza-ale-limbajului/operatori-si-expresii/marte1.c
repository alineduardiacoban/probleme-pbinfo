#include <stdio.h>

int bani_martieni(int a, int b, int c, int m, int n, int p)
{
	return a * m + b * n + c * p;
}

int main()
{
	int a, b, c;
	int m, n, p;

	scanf_s("%d %d %d", &a, &b, &c);
	scanf_s("%d %d %d", &m, &n, &p);

	printf("%d", bani_martieni(a,b,c,m,n,p));
}


