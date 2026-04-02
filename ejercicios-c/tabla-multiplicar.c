#include <stdio.h>
int main (){//vamos a hacer una tabla de multiplicar hasta el 10 con cualquier numero que nos de el usuario
    int num, resultado, mult = 0;
    printf("Bienvenido a la Tabla de multiplicar\n");
    printf("\nIngrese un numero\n");
    scanf("%d", &num);//el usuario ingresa el numero
    printf("\nSu tabla es: \n");
    for ( mult = 0 ; mult < 11; mult++){
        resultado = mult* num;
        printf("\t%d\n", resultado);//imprimimos los resultados
    } 
    return 0;
}