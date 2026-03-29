#include <stdio.h>
int main(){
float n1, n2, n3, media;
scanf("%f %f %f", &n1, &n2, &n3);
media = (n1 + n2 + n3) / 3;

if (media >= 7) {
  printf("aprovado");
}
else if (media < 3) {
  printf("reprovado");
 }
 else {
  printf("prova final");
  }

    return 0;
  }