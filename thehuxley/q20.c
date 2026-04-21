#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        int fatorial = 1;

        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("%d\n", fatorial);
    }

    return 0;
}
