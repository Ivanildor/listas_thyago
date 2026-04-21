#include <stdio.h>
int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int d = mdc(A, B);

    if (C % d == 0) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}