#include <stdio.h>

int main() {
    int ch;
    int num1 = 0, num2 = 0;
    char operation = 0;
    int state = 0; // 0: entering num1, 1: operation entered, 2: entering num2

    printf("Simple calculator (example input: 12+34):\n");

    while ((ch = getchar()) != '\n') {  // Read until Enter key is pressed
        if (ch >= '0' && ch <= '9') {
            if (state == 0) {
                num1 = num1 * 10 + (ch - '0'); // Building the first number
            } else if (state == 1 || state == 2) {
                state = 2; // Transition to entering the second number
                num2 = num2 * 10 + (ch - '0'); // Building the second number
            }
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            operation = ch;
            state = 1; // Operation detected
        }
    }

    int result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operation!\n");
            return 1;
    }

    printf("Result: %d %c %d = %d\n", num1, operation, num2, result);
    return 0;
}
