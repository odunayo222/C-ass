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
    printf("List of prime numbers from 1 to 100:\n");

    for (int num = 2; num <= 100; num++) {
        if (isPrime(num)) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
