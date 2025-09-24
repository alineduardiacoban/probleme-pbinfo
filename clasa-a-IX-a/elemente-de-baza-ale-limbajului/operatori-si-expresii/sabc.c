#include <stdio.h>

int s(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int a, b, c;
    if (scanf_s("%d%d%d", &a, &b, &c) != 3) {
        return 1;
    }
    
    printf("%d %d %d", s(a, b), s(b, c), s(a, c));

}


