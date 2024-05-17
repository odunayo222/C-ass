#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c) {
    double s, area;

    // Check if the sides can form a valid triangle
    if (a + b > c && b + c > a && a + c > b) {
        // Calculate the semi-perimeter
        s = (a + b + c) / 2.0;

        // Calculate the area using Heron's formula
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    } else {
        return 0.0; // Return 0 if the sides cannot form a valid triangle
    }
}

int main() {
    double side1, side2, side3;
    double area;

    while (1) {
        printf("Enter the three sides of the triangle (nonzero values): ");
        scanf("%lf %lf %lf", &side1, &side2, &side3);

        if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
            printf("Error: All sides must be nonzero.\n");
            continue;
        }

        area = calculateArea(side1, side2, side3);

        if (area > 0) {
            printf("Area of the triangle: %.2lf\n", area);
        } else {
            printf("Error: The sides cannot form a valid triangle.\n");
        }

        printf("Enter 'q' to quit or any other key to continue: ");
        char choice;
        scanf(" %c", &choice);

        if (choice == 'q' || choice == 'Q') {
            break;
        }
    }

    return 0;
}
