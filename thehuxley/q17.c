#include <stdio.h>
int main(){ 
  int soma = 0, quantidade = 0, glicose;
  scanf("%d", &glicose);

    while (glicose != 0)
    {soma = soma + glicose;
    quantidade = quantidade + 1;
    scanf("%d", &glicose);
  }
    float media = (float)soma / quantidade;
    if (media < 110)
    {printf("Glicose Normal\n", media); }

    else if (media >= 200)
    {printf("Glicose Muito Alta\n"); }

    else{
      printf("Glicose Alterada\n", media);
    }

    
  return 0;
}