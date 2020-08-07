#include <iostream>
using namespace std;

int main() {
    bool contTheProgram = true;

    do {
        int roomCapacity, numberOfPeople;
        char userEnter;

        puts("Please enter the meeting room capacity number: ");
        cin >> roomCapacity;

        puts("Please enter the number of the attendence: ");
        cin >> numberOfPeople;

        if(numberOfPeople <= roomCapacity) {
            cout << "You can allow more attendance, about: " << roomCapacity - numberOfPeople << " more!" << endl;
        } else {
            cout << "Sorry, according to the fire regulations of the meeting room, it's required to exclude about " << numberOfPeople - roomCapacity << " from the attendance" << endl;
        }

        bool completed = true;

        do {
            cout << "Please click Y/N if you want to execute the program again: " << endl;
            cin >> userEnter;

            if (userEnter == 'y' || userEnter == 'Y') {
                contTheProgram = true;
                completed = false;
            } else if (userEnter == 'n' || userEnter == 'N') {
                contTheProgram = false;
                completed = false;
            } else {
                cout << "Please enter a valid choice: " << endl;
            }
        } while (completed);

    } while (contTheProgram);
    return 0;
}
