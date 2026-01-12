#include <iostream>
#include "booking.h"
#include "fileio.h"
#include <iomanip>

using namespace std;

/*
Programmers: Your Name & Matric
Purpose: Load trains from file
*/

int loadTrains(Train trains[], int)
{
    return readFromFile(trains);
}

/*
Programmers: Your Name & Matric
Purpose: Display all train schedules
*/

void displayTrains(Train trains[], int size)
{
    cout << "\n"
         << left << setw(6) << "ID"
         << setw(18) << "From"
         << setw(18) << "To"
         << setw(10) << "Price"
         << setw(10) << "Seats" << endl;

    cout << "---------------------------------------------------------------\n";

    for (int i = 0; i < size; i++)
    {
        cout << left << setw(6) << trains[i].id
             << setw(18) << trains[i].from
             << setw(18) << trains[i].to
             << "RM" << setw(8) << fixed << setprecision(2) << trains[i].price
             << setw(10) << trains[i].seats
             << endl;
    }
}


/*
Programmers: Your Name & Matric
Purpose: Find train by ID
*/

int findTrain(Train trains[], int size, string id)
{
    for (int i = 0; i < size; i++)
    {
        if (trains[i].id == id)
            return i;
    }
    return -1;
}

/*
Programmers: Your Name & Matric
Purpose: Perform ticket booking
*/

void bookTicket(Train trains[], int size)
{
    Booking b;
    cout << "\nEnter customer name: ";
    cin >> b.name;

    cout << "Enter Train ID: ";
    cin >> b.trainID;

    int index = findTrain(trains, size, b.trainID);

    if (index == -1)
    {
        cout << "Train not found!\n";
        return;
    }

    cout << "Enter number of tickets: ";
    cin >> b.tickets;

    if (b.tickets > trains[index].seats)
    {
        cout << "Not enough seats available!\n";
        return;
    }

    b.total = b.tickets * trains[index].price;
    trains[index].seats -= b.tickets;

    cout << "\nBooking Successful!\n";
    cout << "Total price: RM" << b.total << endl;

    saveTrains(trains, size);
}

/*
Programmers: Your Name & Matric
Purpose: Save updated train data
*/

void saveTrains(Train trains[], int size)
{
    writeToFile(trains, size);
}
