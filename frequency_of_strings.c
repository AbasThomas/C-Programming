#include <stdio.h>

int main() {
    char str[100], chr;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Input character to find frequency
    printf("Enter a character to find its frequency: ");
    scanf("%c", &chr);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == chr) {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", chr, count);
    return 0;
}

