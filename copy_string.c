#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin); // Read input string

    // Copy string character by character
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
//    destination[i] = '\0'; // Null terminator to mark the end of the string

    printf("Copied string: %s", destination);

    return 0;
}

