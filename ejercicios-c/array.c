#include <stdio.h>
int main (){
  int enteros [5];
  for (int i = 0 ; i < 5 ; i++){
    printf("\nIngrese un numero por favor\n");
    scanf("%d", &enteros[i]);
  }
  for (int i = 0 ; i < 5 ; i++){
    printf("%d ", enteros[i]);
  }
  return 0;
}