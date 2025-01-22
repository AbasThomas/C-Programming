#include <stdio.h>

int main() {
    int rows;

    
    printf("Enter the number of rows for the pyramid: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1;
    }
	
    
    x`xfor (int i = 1; i <= rows; i++) {
        
        printf("\n");
    }

    return 0;
}

