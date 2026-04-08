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
void menu_de_inicio (){
     printf("\tCalculadora con Funciones\n");

    printf("\nIngrese la operacion deseada\n");
    printf("\t+,-,/,*\n");
}
int main (){
    int opcion;
    char operacion;
    float num1, num2, resultado;
    do {
    menu_de_inicio ();//Llamo a la funcion void 

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
    printf("\nDesea volver a usar la calculadora: Marque 1 para si y 0 para No\n");
    scanf("%d", &opcion);
        if (opcion == 0){
            printf("\nCerrando calculadora, muchas gracias");
        } else if (opcion != 0 && opcion != 1){
            printf ("\n Valores no reconocidos");
        }
        
    } while (opcion == 1);

    return 0;
}