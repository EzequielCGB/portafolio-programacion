#include <stdio.h>
int main (){//vamos a hacer un codigo para que el usuario cargue un numero hasta que coincida con el 7
    int num = 0;

    printf("\t¡Descubra el numero secreto!¿JUGAMOS?\t");

    while (num != 7){
        printf("\nIngrese un Numero entre 1 y 100\n");
        scanf("%d", &num);
        if (num<7 && num>0){//vemos que el numero que ingrese puede ser menor a 7 pero mayor a 0
            printf("\n Su numero es menor al Numero Secreto\n");
        }else if(num>7 && num<=100){//vemos que el numero que ingresa el usuario es mayor a 7 pero menos a 100
            printf("\n Su numero es mayor al Numero Secreto\n");
        }else if(num<= 0 || num>100){//pusimos limites al juego 
            printf("\nFuera de rango\n");
        }else{
            printf("\n SU NUMERO ES EL GANADOR, EL 7");
        }
    }
    
    return 0;
}