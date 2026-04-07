#include <stdio.h>
float suma (float a , float b){
    return a + b;
}
float resta (float a , float b){
    return a - b;
}
float producto (float a , float b){
    return a * b;
}
float division (float a , float b){
    return a / b;
}
int main (){
    char operacion;
    float num1, num2, resultado;
    
    printf("\tCalculadora con Funciones\n");

    printf("\nIngrese la operacion deseada");
    printf("\t+,-,/,*\n");
    scanf(" %c", &operacion);

    printf("\nIngrese el primer numero\n");
    scanf("%f", &num1);
    printf("\nIngrese el segundo numero\n");
    scanf("%f", &num2);

    switch (operacion) {
            case '+':
                resultado = suma (num1 , num2);
                printf("\nEl resultado de su suma es: %.2f", resultado);
                break;
            case '-':
                resultado = resta (num1 , num2);
                printf("\nEl resultado de su resta es: %.2f", resultado);
                break;
            case '/':
                if(num2 == 0){
                    printf("\nError, cualquier numero dividido por cero da infinito");
                } else {
                    resultado = division (num1 , num2);
                    printf("\nEl resultado de su division es: %.2f", resultado);
                }
                break;
            case '*':
                resultado = producto (num1 , num2);
                printf("\nEl resultado de su multiplicacion es: %.2f", resultado);
                break;

            default:
                printf("El programa no reconoce esos valores");
                break;
    }
    return 0;
}