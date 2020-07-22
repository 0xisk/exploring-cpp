// 12 mins
#include <iostream>
using namespace std;

const double ONE_LITER = 0.264179;
double carMilesUsageOfGallons(float liters, float miles);

int main() {
    float liters, miles;
    double numberOfMilesPerGallon;

    int numberOfCars;
    double carsUsage [numberOfCars];

    int bigI = 0;

    cout << "Enter the number of cars you want to calculate: " << endl;
    cin >> numberOfCars;

    for (int i = 0; i <= numberOfCars -1; i++) {
        cout << "Enter the number of liters of gasoline you've consumed in car " <<  i + 1 << " : " << endl;
        cin >> liters;

        cout << "Enter the number of miles you've traveled in car " <<  i + 1 << " : "  << endl;
        cin >> miles;

        numberOfMilesPerGallon = carMilesUsageOfGallons(liters, miles);

        carsUsage[i] = numberOfMilesPerGallon;
    }


    for (int i = 0; i <= numberOfCars -1; i++) {
        for (int j = i + 1; j <= numberOfCars; j++) {
            if (carsUsage[j] > carsUsage[i]) {
                bigI = j;
                break;
            }
        }
    }

    cout << "The number of the Highest efficient car is: " << endl;
    cout << bigI + 1 << endl;
    cout << "Which was with usage equals: " << endl;
    cout << carsUsage[bigI] << endl;

    return 0;
}

double carMilesUsageOfGallons(float liters, float miles) {
    double numberOfGallons = liters * ONE_LITER;
    double numberOfMilesPerGallon = miles / numberOfGallons;

    return numberOfMilesPerGallon;
}