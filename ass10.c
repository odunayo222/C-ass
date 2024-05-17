#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1; // Return 1 if num is even
    } else {
        return 0; // Return 0 if num is odd
    }
}

int main() {
    int num;
    char choice;

    do {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (isEven(num)) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }

        printf("Do you want to check another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
