#include <stdio.h>

int main(){
  float sal, ns;// saario e novo salario
  scanf("%f", &sal);

  ns = sal * 1.075;
  ns = (int)(ns * 10 + 0.5) / 10.0;

  printf("%.2f", ns);

  return 0;
}