#include <stdio.h>
#include <math.h>

int main() {
    double mealCost;
    int tipPercent;
    int taxPercent;

    scanf("%lf", &mealCost);
    scanf("%d", &tipPercent);
    scanf("%d", &taxPercent);
    
    double tip = mealCost * tipPercent / 100;
    double tax = mealCost * taxPercent / 100;
    int totalCost = (int) round(mealCost + tip + tax);
    
    printf("The total meal cost is %d dollars.", totalCost);
    
    return 0;
}