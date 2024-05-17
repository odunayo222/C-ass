#include <stdio.h>

int main() {
    int num1 = 5, num2 = 5;
    int preIncremented, postIncremented;

    // Preincrementing
    preIncremented = ++num1;

    // Postincrementing
    postIncremented = num2++;

    printf("Original value: 5\n");
    printf("After pre-incrementing: %d\n", preIncremented);
    printf("After post-incrementing: %d\n", postIncremented);
    printf("Value of num1 after pre-incrementing: %d\n", num1);
    printf("Value of num2 after post-incrementing: %d\n", num2);

    return 0;
}
