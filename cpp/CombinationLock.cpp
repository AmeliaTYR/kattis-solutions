// Combination Lock
#include <iostream>
#include <math.h>
#include <list> 
#include <string> 

using namespace std;

int main()
{
    int first, second, third, fourth;
    int numTurn, degTurn;
    
    while (1) {
        cin >> first;
        cin >> second;
        cin >> third;
        cin >> fourth;
        if (first == 0 && second == 0 && third == 0 && fourth == 0) {
            break;
        }

        // turn 2 full R turns - 1 full L turn
        numTurn = 120;
        // stop at the first number of the combination R clockwise

        numTurn += (first + 40 - second) % 40;

        numTurn += (third + 40 - second) % 40;
        
        numTurn += (third + 40 - fourth) % 40;
        
        // convert numerical change to degrees
        degTurn = numTurn * 9;
        cout << degTurn << endl;
    }

}