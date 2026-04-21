#include <stdio.h>
int main(){
  int idade, quantidade = 0, soma = 0;
  float media;
  scanf("%d", &idade);
  
    while (idade >= 0)
    {
     soma = soma + idade;
     quantidade = quantidade + 1;
     scanf("%d", &idade);
    }  
      media = (float)soma / quantidade;
      printf("%.2f\n", media);

  return 0;
}