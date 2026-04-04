#include <stdio.h>
int main(){//Vamos a hacer una calculadora, que el usuario elija la operacion y los numeros
    float num1, num2, resultado;
    char operacion;
    printf("\tCalculador\n");

    printf("\nIngrese la operacion deseada");
    printf("\t+,-,/,*\n");
    scanf(" %c", &operacion);//Aca ingresa que tipo de operacion quiere

    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);//Aca el primer valor a operar
    printf("Ingrese el segundo numero\n");
    scanf("%f", &num2);//Aca el segundo valor a operar

    if (operacion == '+'){
        resultado = num1 + num2;
        printf("\nEl resultado de su suma es: %.2f", resultado);
    } else if (operacion == '-'){
        resultado = num1 - num2;
        printf("\nEl resultado de su resta es: %.2f", resultado);
    } else if (operacion == '/'){
        if(num2 == 0){
            printf("\nError, cualquier numero dividido por cero da infinito");
        } else {
        resultado = num1 / num2;
        printf("\nEl resultado de su division es: %.2f", resultado);
        }
    }else if (operacion == '*'){
        resultado = num1 * num2;
        printf("\nEl resultado de su multiplicacion es: %.2f", resultado);
    } else {
        printf("El programa no reconoce esos valores");
    }

    return 0;
}