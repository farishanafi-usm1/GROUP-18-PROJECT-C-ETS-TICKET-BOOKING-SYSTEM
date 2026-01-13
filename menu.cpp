#include <iostream>
#include "menu.h"
using namespace std;


void showMainMenu()
{
    cout << "\n=========== ETS TICKET BOOKING SYSTEM ==========\n";
    cout << "1. View Train Schedule\n";
    cout << "2. Book Ticket\n";
    cout << "3. Exit\n";
    cout << "================================================\n";
}

int getMenuChoice()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    while (choice < 1 || choice > 3)
    {
        cout << "Invalid choice! Enter again: ";
        cin >> choice;
    }
    return choice;
}
