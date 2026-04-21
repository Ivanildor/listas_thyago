#include <stdio.h>
int main(){
  int n, soma = 0, i, valor;
  scanf("%d", &n);
    
  for (i = 0; i < n ; i++){
    scanf("%d", &valor);
    soma = soma + valor;
  }

  printf("%d\n", soma);



return 0;
}