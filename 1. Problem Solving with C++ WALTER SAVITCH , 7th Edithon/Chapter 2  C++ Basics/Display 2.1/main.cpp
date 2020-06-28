#include <iostream>
using namespace std;

int main() {
    int numberOfBars;
    double oneWeight, totalWeight;

    cout << "Enter the number of candy bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cin >> numberOfBars;
    cin >> oneWeight;

    totalWeight = oneWeight * numberOfBars;

    cout << numberOfBars << "candy bars\n";
    cout << oneWeight << "ounces each\n";
    cout << "Total weight is " << totalWeight << "ounces.\n";

    cout << "Try another brand.\n";

    return 0;
}