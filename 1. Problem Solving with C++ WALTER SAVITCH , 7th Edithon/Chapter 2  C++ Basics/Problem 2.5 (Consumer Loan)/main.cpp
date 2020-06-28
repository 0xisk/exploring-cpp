#include <iostream>
using namespace std;

int main() {

    int duration;
    float yearDuration;
    float consumerAmount;
    float interestRate;
    float faceValue;
    float monthlyPayment;
    float interestAmount;

    cout << "Enter your desired loan in Dollars : \n";
    cin >> consumerAmount;

    cout << "Enter Interest Rate : \n";
    cin >> interestRate;

    cout << "Enter Duration of load in Months : \n";
    cin >> duration;

    yearDuration = duration/12;
    interestAmount = (interestRate * yearDuration) * 1000;
    faceValue = consumerAmount + interestAmount;
    monthlyPayment = faceValue / duration;

    cout << "Your Face Value = \n" << faceValue << endl;
    cout << "Your Monthly Payment = \n" << monthlyPayment << endl;


    return 0;
}