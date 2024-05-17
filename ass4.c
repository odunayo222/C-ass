#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If num is divisible by any number from 2 to sqrt(num), it's not prime
        }
    }

    return true; // If num is not divisible by any number from 2 to sqrt(num), it's prime
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
