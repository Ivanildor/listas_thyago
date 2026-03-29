#include <stdio.h> 
#include <math.h>

int main(){
int a, b, c;
float delta, x1, x2;
scanf("%d %d %d", &a, &b, &c);
if(a == 0){
  printf("erro");
}
else{
  delta = b*b - 4*a*c;
  if (delta < 0){
  printf("erro");
}
 else{
  x1 = (-b + sqrt(delta)) / (2*a);
  x2 = (-b - sqrt(delta)) / (2*a);
  printf("%.2f %.2f", x1, x2);
 } 
}

  return 0;

}