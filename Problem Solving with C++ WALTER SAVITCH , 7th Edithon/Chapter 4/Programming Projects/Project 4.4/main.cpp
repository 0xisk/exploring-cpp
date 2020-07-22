#include <iostream>
using namespace std;

double calculateInflationRate(float oldPrice, float newPrice);

int main() {
    float oldPrice, newPrice;
    double inflationRate;

    cout << "Please, Enter the price of an item from one year ago: " << endl;
    cin >> oldPrice;
    cout << "Plesse, Enter the price of an item nowadays: " << endl;
    cin >> newPrice;

    inflationRate = calculateInflationRate(oldPrice, newPrice);

    cout << "The estimated inflation Rate is: " << inflationRate << endl;
    return 0;
}

double calculateInflationRate(float oldPrice, float newPrice) {
    double inflationRate;
    inflationRate = ( newPrice - oldPrice ) / oldPrice;
    return inflationRate;
}
