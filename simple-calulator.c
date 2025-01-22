#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Get inputs from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform the chosen operation
    switch (operator) {
        case "+":
            printf("Result: %d\n", num1 + num2);
            break;
        case "-":
            printf("Result: %d\n", num1 - num2);
            break;
        case "*":
            printf("Result: %d\n", num1 * num2);
            break;
        case "/":
            if (num2 != 0) {
                printf("Result: %d\n", num1 / num2);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
       
    }

    return 0;
//    09038973779
}

