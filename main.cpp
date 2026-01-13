#include <iostream>
#include "menu.hpp"
#include "booking.hpp"
using namespace std;


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
