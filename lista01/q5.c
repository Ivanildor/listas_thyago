#include <stdio.h>
int main(){
  int number;
  printf("Type a number:");
  scanf("%d", &number);

  printf("The reversed number is: %d", (number % 10)*1000 + ((number / 10) % 10)*100 + ((number / 100) % 10)*10 + (number / 1000));

  return 0;
}