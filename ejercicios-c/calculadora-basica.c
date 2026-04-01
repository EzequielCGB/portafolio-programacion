#include <stdio.h>
int main (){
    float num1, num2, resultado;
    printf("--- Calculadora Basica ---\n");
    printf("Ingresa el primer numero: \n");
    scanf("%f", &num1);
    printf("Ingresa el segundo numero: \n");
    scanf("%f", &num2);
    resultado = num1 + num2;
    if (resultado > 0){
    printf("\nEl resultado es positivo: %.2f\n", resultado);
    } else if (resultado < 0)
    {
    printf("\nEl resultado es negativo: %.2f\n", resultado);
    } else{
    printf("\nEl resultado es exactamente cero: %.2f\n", resultado);
    }
    return 0;
}