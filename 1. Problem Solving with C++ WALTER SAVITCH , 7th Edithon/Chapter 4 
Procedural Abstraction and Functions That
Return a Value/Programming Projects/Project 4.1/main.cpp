// 12 mins

#include <iostream>
using namespace std;

const double ONE_LITER = 0.264179;
double carMilesUsageOfGallons(float liters, float miles);

int main() {
    float liters;
    float miles;
    double numberOfMilesPerGallon;

    cout << "Enter the number of liters of gasoline you've consumed: " << endl;
    cin >> liters;

    cout << "Enter the number of miles you've traveled: " << endl;
    cin >> miles;

    numberOfMilesPerGallon = carMilesUsageOfGallons(liters, miles);
    cout << "The number of miles traveled per Gallons: " << endl;
    cout << numberOfMilesPerGallon;
    return 0;
}

double carMilesUsageOfGallons(float liters, float miles) {
    double numberOfGallons = liters * ONE_LITER;
    double numberOfMilesPerGallon = miles / numberOfGallons;

    return numberOfMilesPerGallon;
}
