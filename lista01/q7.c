#include <stdio.h>
int main(){
int value;
int n50, n20, n10, n5, n1;
int rest;

scanf("%d", &value);
n50 = value / 50;
rest = value % 50;

n20 = rest / 20;
rest = rest % 20;

n10 = rest / 10;
rest = rest % 10;

n5 = rest / 5;
rest = rest % 5;

n1 = value / 1;

printf("Notes:\n50: %d\n20: %d\n10: %d\n5: %d\n1: %d", n50, n20, n10, n5, n1);


  return 0;
}