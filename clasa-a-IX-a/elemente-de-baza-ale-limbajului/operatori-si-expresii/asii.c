#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Eroare la citirea numerelor.\n");
        return 1;
    }

    printf("%d %d %d %d", a + b, a - b, a * b, a / b);
}
