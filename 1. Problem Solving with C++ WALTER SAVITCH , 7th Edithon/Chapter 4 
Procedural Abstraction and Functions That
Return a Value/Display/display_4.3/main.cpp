#include <iostream>
using namespace std;

// Computes the total cost, including 5% sales tax,
// on number_par items at a cost of price_par each.
double total_cost(int number_par, double price_par);

int main() {
    double price, bill;
    int number;

    cout << "Enter the number of items purchased: ";
    cin >> number;
    cout << "Enter the price per item $";
    cin >> price;

    bill = total_cost(number, price);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << number << " items at "
         << "$" << price << " each.\n"
         << "Final bill, including tax, is $" << bill
         << endl;

    return 0;
}

double total_cost(int number_par, double price_par) {
    const double TAX_RATE = 0.05; // 5% sales tax
    double subtotoal;

    subtotoal = price_par * number_par;
    return (subtotoal + subtotoal * TAX_RATE);
}