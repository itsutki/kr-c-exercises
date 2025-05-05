#include <stdio.h>

#define UPPER_LIMIT 300
#define LOWER_LIMIT 0
#define STEP -10


double f_to_c(double f){
    return (f - 32) * 5 / 9.0;
}

int main(){
    double fahrenheit = UPPER_LIMIT;
    printf("Fahrenheit - Celcius\n");
    while(fahrenheit >= LOWER_LIMIT){
        printf("%7.1f %11.1f\n", fahrenheit, f_to_c(fahrenheit));
        fahrenheit += STEP;
    }
}