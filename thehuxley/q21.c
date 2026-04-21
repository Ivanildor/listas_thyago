#include <stdio.h>
int main(){
  int n, m, i, primeiro = 1;
    scanf("%d %d", &n, &m);               
   for (i = n; i <= m ; i++) {
    if (i % 5 == 0){
    
    if (primeiro == 1)
    {
      printf("%d", i);
      primeiro = 0;
    } else
    {
      printf("|%d", i);
    }
    
   }
   }   

   
   return 0;
  }
