#include <stdio.h>
int main(){
    float valor;
    int anos;

    scanf("%f", &valor);
    scanf("%d", &anos);

    if (anos == 1) {
        valor = valor * 1.03;
    }
    else if (anos == 2) {
        valor = valor * 1.05;
    } // se for 0, não faz nada

    printf("%.2f", valor);

    return 0;
}