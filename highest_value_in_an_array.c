#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int highest = arr[0];
    
    
    for (int i = 1; i < 7; i++) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }

    printf("The highest value is: %d\n", highest);
    return 0;
}

