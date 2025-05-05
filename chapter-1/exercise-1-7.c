#include <stdio.h>

// celcius to fahrenheit converter using symbolic constants

#define LOWER_LIMIT -10
#define UPPER_LIMIT 100
#define STEP 10

//celcius to fahrenheit function

double c_to_f(double c){
    return c * 9.0/5 + 32;
}


int main(){
    double celcius;
    printf("Celcius - Fahrenheit\n");

    for (celcius = LOWER_LIMIT; celcius <= UPPER_LIMIT; celcius = celcius + STEP){
        printf("%6.1f %8.1f\n", celcius, c_to_f(celcius));
    }
}

