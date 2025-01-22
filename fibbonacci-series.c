#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms: \n", n);

    printf("%d, %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;         
		printf(", %d", next);    
        first = second;         
        second = next;         
		
    }

    return 0;
}

