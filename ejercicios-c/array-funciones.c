#include <stdio.h> 
// Calculates and returns the average
float average(float a , float b) {
    return a / b;
}
// Returns the maximum value of the array
float max(float a[] , int size){
    float current_max = a[0];
    for(int i = 1 ; i < size ; i++){
        if(a[i] > current_max) {
            current_max = a[i];
        }  
    }  
    return current_max;
}
// Returns the minimum value of the array
float min(float a[] , int size) {
    float current_min = a[0];
    for(int i = 1 ; i < size ; i++){
        if(a[i] < current_min) {
            current_min = a[i];
        }  
    }  
    return current_min;
}
int main() {
    float result;
    float addition = 0;
    float num[5];
    for(int i = 0 ; i < 5 ; i++) {
        printf("\nPlease enter a number\n");
        scanf("%f", &num[i]);
        addition += num[i];
    }
    for (int i = 0 ; i < 5 ; i++){
        printf("%f ", num[i]);

    }
    result = min (num, 5);
    printf("\nThe minimum is: %.2f", result);
    result = max (num, 5);
    printf("\nThe maximum is: %.2f", result);
    result = average (addition , 5);
    printf("\nThe average is: %.2f", result);

    return 0;
}