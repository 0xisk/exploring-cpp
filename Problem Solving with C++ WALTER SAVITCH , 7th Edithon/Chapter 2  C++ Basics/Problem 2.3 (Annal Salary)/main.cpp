//Author: IskanderAndraws
//Annal Salary
//Date: 1 May 2019

#include <iostream>
using namespace std;

int main() {
    const float PAY_INC = 0.076;
    float previousSalary;
    float amountInc;
    float newSalary;
    float newMonthlySalary;

    cout << "Enter your precious Annal Salary:\n";
    cin >> previousSalary;

    amountInc = previousSalary * (PAY_INC * 2);
    newSalary = previousSalary + amountInc;
    newMonthlySalary = newSalary / 12;
    cout << "Your new Salary = " << newSalary << " " << "And your new Monthly salary = " << newMonthlySalary;

    return 0;
}