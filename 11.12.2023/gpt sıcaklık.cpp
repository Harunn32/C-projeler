#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main()
{
    // srand(time(0)); // This line is not necessary in C++11 and later

    int sicaklik[3][7];
    
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". Sehir:" << endl; // Print city number

        int top = 0; // Reset the sum for each city

        for (int j = 0; j < 7; j++)
        {
            sicaklik[i][j] = rand() % 71 - 20; // Random temperature between -20 and 50
            top += sicaklik[i][j];

            cout << "Gun " << j + 1 << ": " << sicaklik[i][j] << " ";
        }

        cout << "\nOrtalama Sicaklik: " << (top / 7.0) << "\n\n"; // Calculate and print average temperature for the city
    }

    return 0;
}

