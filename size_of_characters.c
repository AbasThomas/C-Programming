#include <stdio.h>

int main() {
    char str[100];
    int i, vowels = 0, spaces = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // Check for vowels
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'  ) {
            vowels++;
        }
        else if (str[i] == ' ') {
            spaces++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("White spaces: %d\n", spaces);
    printf("Consonants: %d\n", consonants);

    return 0;
}

