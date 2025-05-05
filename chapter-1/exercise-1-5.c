#include <stdio.h>

// celcius to fahrenheit converter
int main(){
    //fahrenheit = celcius * 9/5 + 32
    double fahrenheit, celcius;

    for (celcius = -10; celcius <= 100; celcius += 10){
        fahrenheit = celcius * 9.0/5 + 32;
        printf("%6.1f %6.1f \n", fahrenheit,celcius);
    }
}