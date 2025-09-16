#include <stdio.h>

int main() {
    int B, S;
    if (scanf_s("%d %d", &B, &S) != 2) {
        return 1;
    }
    int C = S / B;      
    int R = S % B;      
    int P = B - R;       
    if (R == 0) {
        P = B;
    }
    printf("%d %d", C, P);
    return 0;
}
