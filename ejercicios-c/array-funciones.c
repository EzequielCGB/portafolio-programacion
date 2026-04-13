#include <stdio.h>
float promedio (float a , float b ){
    return a / b;
}
int main (){
    float resultado;
    float suma = 0;
    float enteros [5];
    for (int i = 0 ; i < 5 ; i++){
        printf("\nIngrese un numero por favor\n");
        scanf("%f", &enteros[i]);
        suma += enteros[i];
    }
    for (int i = 0 ; i < 5 ; i++){
        printf("%f ", enteros[i]);
    }
    resultado = promedio (suma , 5);
    printf("\nSu promedio es: %.2f", resultado);

    return 0;
}