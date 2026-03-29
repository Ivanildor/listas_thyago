#include <stdio.h>
int main(){
  float p, a, imc;
  printf("Enter your wigth:");
  scanf("%f", &p);
  
  printf("Enter your heigth:");
  scanf("%f", &a);

  imc = p / (a * a);
  if (imc < 18.5)  {
    printf("Underweigth");
  }
  else if(imc < 25){
    printf("Normal");
  }
  else if(imc < 30){
    printf("Overweight");
  }
  else{
    printf("Obesity");
  }
  

  
  return 0;
}