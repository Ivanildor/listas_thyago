#include <stdio.h> 
int main(){
  float kg, m, imc;
  scanf("%f %f", &kg, &m);
imc = kg / (m * m);
printf("%.2f", imc);




return 0;
}


