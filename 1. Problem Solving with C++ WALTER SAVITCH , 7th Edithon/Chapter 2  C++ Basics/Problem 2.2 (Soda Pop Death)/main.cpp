//Author: IskanderAndraws
//Soda Pop Death
//Date: 1 May 2019

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    const double SODA_ARTIFICIAL_SWEETENER = 0.001;
    double minimamArtificialSweetener;
    double sweetenerMouse;
    double dieterWeight;
    double sweetenerDieter;
    int dietSodaPopCans;

    cout << "This program calculates how many cans of soda it will take to kill you !\n";
    cout << "Each can contains 0.001 (0.1%) of artificial sweetener\n" << endl;

    cout << "Enter the amount of Artificial Sweetner needed to kill a mouse: \n";
    cin >> minimamArtificialSweetener;

    cout << "Enter the weight of the mouse in grams: \n";
    cin >> sweetenerMouse;

    cout << "Enter the weight of the dieter in grams at which dieting activity will be stopped: \n";
    cin >> dieterWeight;

    sweetenerDieter = (dieterWeight * minimamArtificialSweetener)/sweetenerMouse;
    dietSodaPopCans = (sweetenerDieter/SODA_ARTIFICIAL_SWEETENER);

    cout << "The amount of Diet Soda Pop Can's that would kill the dieter is: " << dietSodaPopCans;


    return 0;
}