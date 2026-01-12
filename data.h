#ifndef DATA_H
#define DATA_H

#include <string>
using namespace std;

/*
Programmers: Your Name & Matric
Purpose: Define data structures for ETS system
*/

struct Train
{
    string id;
    string from;
    string to;
    double price;
    int seats;
};

struct Booking
{
    string name;
    string trainID;
    int tickets;
    double total;
};

#endif
