#include <iostream>
#include "menu.h"
#include "booking.h"
using namespace std;

/*
Programmers: Your Name & Matric
Purpose: Main program control
Assumptions:
- Train data is stored in trains.txt
- All prices are in RM
- User enters valid input types
*/

int main()
{
    Train trains[100];
    int size = loadTrains(trains, 100);
    int choice;

    do
    {
        showMainMenu();
        choice = getMenuChoice();

        if (choice == 1)
            displayTrains(trains, size);
        else if (choice == 2)
            bookTicket(trains, size);

    } while (choice != 3);

    cout << "Thank you for using ETS Booking System.\n";
    return 0;
}
