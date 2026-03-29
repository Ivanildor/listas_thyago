#include <stdio.h>
int main(){
  int number;
  scanf("%d", &number);
    printf("The reversed number is:%d", number % 10* 10 +number / 10);


  return 0;
}