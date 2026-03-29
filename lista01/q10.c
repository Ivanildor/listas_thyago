#include <stdio.h>
int main(){
float ap, lp, a, la;
float area_parede, area_azulejo, quantidade;

scanf("%f %f %f %f", &ap, &lp, &a, &la);
area_parede = ap * lp;
area_azulejo = a * la;
quantidade = area_parede / area_azulejo;

if (quantidade > (int)quantidade) {
    quantidade = (int)quantidade + 1;
}
printf("Quantidade: %d", (int)quantidade);

  return 0;
}
