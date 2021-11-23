// Baloni

#include <iostream>
#include <math.h>
#include <list> 

using namespace std;

int main()
{
    int sizeA, temp, shots;
    int i;
    int balloons[1000001] = { 0 };

    cin >> sizeA; // get number of balloons

    shots = 0;

    for (i = 0; i < sizeA; i++) {
        cin >> temp;
        balloons[temp]++; // add this balloon to the pop chain

        if (balloons[temp + 1] >= 1) { // check if there is an unpopped balloon 1 above on its left
            balloons[temp + 1]--; // if have pop that balloon
        }

    }

    for (i = 0; i <= 1000000; i++) {
        shots += balloons[i]; // add all unfinished popchains head to shots
    }

    cout << shots;
}
