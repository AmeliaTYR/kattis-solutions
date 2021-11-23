// Flow Shop

#include <iostream>
#include <math.h>
#include <queue> 
#include <string>

using namespace std;

int main()
{
    int swathers, stages, temp, latest;
    int i, j;
    int time = 0;

    cin >> swathers;
    cin >> stages;

    int swat[1001][1001] = { {0} }; // array of swat parts to make

    // read values into array and at the same time calc earlist timing
    for (i = 1; i <= swathers; i++) { 
        for (j = 1; j <=  stages; j++) {
            cin >> temp;
            
            if (i == 1) { // first swather (all stages)
                if (j == 1) { // first stage
                    swat[1][1] = temp; // no change for first value
                    continue;
                }
                else { // first swather (all other stages)
                    swat[i][j] = temp + swat[i][j-1]; // all first row values only depend on stage before it 
                    continue;
                }
            }

            if (j == 1) { // first stage of all other swathers
                swat[i][j] = swat[i - 1][j] + temp; // previous swather
                continue;
            }

            // all other swathers
            latest = max(swat[i - 1][j], swat[i][j - 1]);
            swat[i][j] = latest + temp;

            // where
                // swat[i - 1][j] // previous swather
                // swat[i][j - 1] // previous stage
            
        }
    }

    for (i = 1; i <= swathers; i++) {
        cout << swat[i][stages] << " ";
    }
    
}