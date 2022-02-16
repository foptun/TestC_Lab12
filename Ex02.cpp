#include <stdio.h>

void calculateMilesToKilometers();
void calculateKilometersToMiles();

void main() {
    
    int choice = 0;
    
    printf("Convert from MILES to KILOMETERS \n");
    printf("Convert from KILOMETERS to MILES \n");
    printf("Please enter your choice (1-2) : ");    
    scanf("%d", &choice);
    
    if (choice == 1) {
        calculateMilesToKilometers();
    } else if (choice == 2) {
        calculateKilometersToMiles();
    }
    
    printf("*** Program End *** \n");
}

void calculateMilesToKilometers() {
    float distance = 0.0;
    printf("===== MILES to KILOMETERS ===== \n");
    printf("Enter a distance (mile): ");
    scanf("%f", &distance);
    printf("%.2f miles = %.2f kilometers \n", distance, (distance * 1.6) );
}

void calculateKilometersToMiles() {
    float distance = 0.0;
    printf("===== KILOMETERS to MILES ===== \n");
    printf("Enter a distance (kilometer): ");
    scanf("%f", &distance);
    printf("%.2f kilometers = %.2f miles \n", distance, (distance / 1.6) );
}
