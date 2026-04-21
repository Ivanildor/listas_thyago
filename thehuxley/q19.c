#include <stdio.h>
int main(){
  int n, produto = 1, todosprimos = 1;

  for (int i = 0; i < 4; i++) {
    scanf("%d", &n);

  if (n < 2) {
    todosprimos = 0;
  } else {
    for (int j = 2; j < n; j++) {
    if (n % j == 0) {
      todosprimos = 0;
      break;
    }
  }
} 
    produto = produto * n;
}

    if (todosprimos == 1){
      printf("%d\n",produto);
    }
    else
    {
      printf("SEM PRODUTO\n");
    }
  
  


  return 0;
}