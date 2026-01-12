#include <fstream>
#include "fileio.h"

/*
Programmers: Your Name & Matric
Purpose: Read train data from file
*/

int readFromFile(Train trains[])
{
    ifstream fin("trains.txt");
    int count = 0;

    while (fin >> trains[count].id >> trains[count].from
           >> trains[count].to >> trains[count].price >> trains[count].seats)
    {
        count++;
    }
    fin.close();
    return count;
}

/*
Programmers: Your Name & Matric
Purpose: Save train data back to file
*/

void writeToFile(Train trains[], int size)
{
    ofstream fout("trains.txt");

    for (int i = 0; i < size; i++)
    {
        fout << trains[i].id << " "
             << trains[i].from << " "
             << trains[i].to << " "
             << trains[i].price << " "
             << trains[i].seats << endl;
    }
    fout.close();
}
