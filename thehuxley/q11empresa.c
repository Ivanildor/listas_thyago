#include <stdio.h>
int main(){
float sal; //sal = salario
scanf("%f", &sal);

if (sal > 500){
  sal = sal * 1.10;
}
else if (sal > 300){
  sal = sal * 1.07;
}
else { 
  sal = sal * 1.05;
}

printf("%.2f", sal);

  return 0;
}