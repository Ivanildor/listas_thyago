#include <stdio.h>
int main(){
   float peso, taxa;
scanf("%f", &peso);

if (peso <= 20) {
  printf("0.00");
    }
else if (peso <= 25) {
  taxa = (peso - 20) * 12.50;
  printf("%.2f", taxa);
    }
else if (peso <= 30) {
  taxa = (peso - 20) * 32.75;
  printf("%.2f", taxa);
    }
else {
  printf("PESO LIMITE EXCEDIDO");
    }

    return 0;
}