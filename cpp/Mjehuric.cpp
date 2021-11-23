// Mjehuric

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    int temp;
    int i, j, flag;
    int numArr[5] = { 0 };

    for (i = 0; i < 5; i++) {
        cin >> numArr[i];
    }

    
    for (i = 4; i > 0; i--) {
        flag = 1;
        for (j = 0; j < i; j++) {
            if (numArr[j] > numArr[j + 1]) {
                temp = numArr[j];
                numArr[j] = numArr[j+1];
                numArr[j + 1] = temp;

                cout << numArr[0] << ' ';
                cout << numArr[1] << ' ';
                cout << numArr[2] << ' ';
                cout << numArr[3] << ' ';
                cout << numArr[4] << endl;
                flag = 0;
            }
        }
        if (flag) {
            break;
        }
            
    }
}