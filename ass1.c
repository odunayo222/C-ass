#include <stdio.h>

int main() {
    int number, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    digit1 = number / 10000;  // Extracting the first digit
    digit2 = (number / 1000) % 10;  // Extracting the second digit
    digit3 = (number / 100) % 10;   // Extracting the third digit
    digit4 = (number / 10) % 10;    // Extracting the fourth digit
    digit5 = number % 10;           // Extracting the fifth digit

    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}
