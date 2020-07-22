/* A metric ton is 35,273.92 ounces. Write a program that will read the weight
of a package of breakfast cereal in ounces and output the weight in metric
tons as well as the number of boxes needed to yield 1 metric ton of cereal.
Your program should allow the user to repeat this calculation as often as
the user wishes.
 * */

#include <iostream>
using namespace std;

int main() {
    const double METRIC_TON = 35273.92;
    double ounces, boxes;

    cout << "Enter the weight of the package of breakfast cereal in ounces:\n";
    cin >> ounces;

    cout << "The weight in mertic tons = " << (ounces * 1)/METRIC_TON << " TONS" <<endl;

    boxes = METRIC_TON/ounces;
    cout<<"The number of boxes of cereal that will holda ton: "<< boxes << endl;
    return 0;
}