#include <stdio.h>

int main() {
    float weightInKg, weightInTons, weightPercentage, numOfRest, minsOfRest, minsOfTrip, hoursOfTrip, totalWeight;
    int counter = 0, numOfWorkers, numOfTrip;

    printf("Enter the number of workers: ");
    scanf("%d", &numOfWorkers);

    while  (counter < numOfWorkers) {
        printf("Enter weight of worker %d in (KG): ", counter + 1);
        scanf("%f", &weightInKg);
        totalWeight = totalWeight + weightInKg;

        counter ++;

        
    }
    weightInTons = totalWeight / 1000;
    
    weightPercentage = weightInTons * 0.6;

    numOfTrip = 100 / weightPercentage;
    
    numOfRest = numOfTrip / 6;

    minsOfRest = numOfRest * 10;

    minsOfTrip = (numOfTrip * 10) + minsOfRest;
    
    hoursOfTrip = minsOfTrip / 60;

    if (numOfWorkers <= 1 && numOfTrip >= 2) {
        printf("It will take %d worker %d trips and %.2f hours to move 100 tons of cement\n", numOfWorkers, numOfTrip, hoursOfTrip);
    }
    else if (numOfTrip < 1)
    {
        printf("It will take %d workers 1 trip and 10 minutes to move 100 tons of cement\n", numOfWorkers);
    }
    
    else  {
        printf("It will take %d workers %d trips and %.2f hours to move 100 tons of cement\n", numOfWorkers, numOfTrip, hoursOfTrip);
    }

    return 0;
}