#include <stdio.h>

int main() {
    float totalMiles, costPerGallon, avgMilesPerGallon, parkingFees, tolls;
    float drivingCost, carPoolingCost, savings;

    printf("Enter total miles driven per day: ");
    scanf("%f", &totalMiles);

    printf("Enter cost per gallon of gasoline: $");
    scanf("%f", &costPerGallon);

    printf("Enter average miles per gallon: ");
    scanf("%f", &avgMilesPerGallon);

    printf("Enter parking fees per day: $");
    scanf("%f", &parkingFees);

    printf("Enter tolls per day: $");
    scanf("%f", &tolls);

    // Calculate driving cost
    drivingCost = (totalMiles / avgMilesPerGallon) * costPerGallon + parkingFees + tolls;

    printf("\nYour cost per day of driving to work: $%.2f\n", drivingCost);

    // Assuming car-pooling reduces driving by 25%
    carPoolingCost = (totalMiles * 0.75 / avgMilesPerGallon) * costPerGallon + parkingFees + tolls;
    
    savings = drivingCost - carPoolingCost;
    printf("Estimated savings per day with car-pooling: $%.2f\n", savings);

    return 0;
}
