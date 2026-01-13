#ifndef BOOKING_H
#define BOOKING_H

#include "data.h"


int loadTrains(Train[], int);
void displayTrains(Train[], int);
int findTrain(Train[], int, string);
void bookTicket(Train[], int);
void saveTrains(Train[], int);

#endif
