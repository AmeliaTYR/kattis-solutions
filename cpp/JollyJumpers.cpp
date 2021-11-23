// Jolly Jumpers
#include <iostream>
#include <math.h>
#include <queue> 
#include <string>

using namespace std;

int main()
{
    int numbers, num1, num2, diff;
    bool values[3000] = { false };
    int i = 1;
    bool jolly;
    bool first = true;
    string jo;

    while (cin >> numbers) {
        
        cin >> num1;

        if (!first) {
            for (; i <= numbers; i++) {
                if (values[i] == false) {
                    jolly = false;
                }
                values[i] = false;
            }
        }

        first = false;
        jolly = true;

        for (i = 0; i < numbers - 1; i++) { // read find all the abs diffs
            cin >> num2;
            if (num1 == max(num1, num2)) {
                diff = abs(num1 - num2);
            }
            else {
                diff = abs(num2 - num1);
            }

            values[diff] = true;

            num1 = num2;

        }

        // check if any in the sequence missing
        for (i = 1; i <= numbers - 1; i++) {
            if (values[i] == false) {
                jolly = false;
                break;
            }

            values[i] = false;
        }

        jo = jolly ? "Jolly" : "Not jolly";
        cout << jo << endl;
        jolly = true;
    }

}
