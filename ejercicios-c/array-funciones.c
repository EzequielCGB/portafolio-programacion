#include <stdio.h> 
float promedio (float a , float b ){//Funcion para sacar el promedio
    return a / b;
}
float maximo ( float a[] , int tamanio){//Funcion para sacar el numero maximo del array
    float mayor = a[0];
    for (int i = 1 ; i < tamanio ; i++){
        if (a[i] >mayor ){
            mayor = a[i];
        }  
    }  
    return mayor;
}
float minimo ( float a[] , int tamanio){//Funcion para sacar el numero minimo del array
    float menor = a[0];
    for (int i = 1 ; i < tamanio ; i++){
        if (a[i] < menor ){
            menor = a[i];
        }  
    }  
    return menor;
}
int main (){//Comienzo del codigo principal
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
    //Calculo y muestro los resultados
    resultado = minimo (enteros, 5);
    printf("\nEl menor es: %.2f", resultado);
    resultado = maximo (enteros, 5);
    printf("\nEl mayor es: %.2f", resultado);
    resultado = promedio (suma , 5);
    printf("\nSu promedio es: %.2f", resultado);

    return 0;
}