#include <stdio.h>


int main(){

    int c;
    int lastc = 'X';

    while((c = getchar()) != EOF){
        if (c != ' '){
            putchar(c);
        }
        else if (lastc != ' '){
            putchar(c);
        }
        lastc = c;
    }
}