#ifndef BOOKING_H
#define BOOKING_H

#include "data.hpp"


int loadTrains(Train[], int);
void displayTrains(Train[], int);
int findTrain(Train[], int, string);
void bookTicket(Train[], int);
void saveTrains(Train[], int);
bool seatsAvailable(Train t, int requested);

#endif
