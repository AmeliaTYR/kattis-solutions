// Sideways Sorting

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int letter, word, sum1, sum2;
    char temp;
    int i, j, k, flag;
    char charArr[15][15] = { 0 }; //[word][letter]

    cin >> letter;
    cin >> word;
    while (letter != 0 && word != 0) {
        // read array
        for (i = 0; i < letter; i++) {
            for (j = 0; j < word; j++) {
                cin >> temp;
                charArr[j][i] = temp;
            }
        }

        // sort array
        for (i = word; i > 0; i--) {// number of times to check
            flag = 1;
            for (j = 0; j < i-1; j++) { 
                sum1 = 0;
                sum2 = 0;
                k = 0;
                // find bigger
                while (sum1 == sum2 && k<letter) { // check next letter down
                    sum1 += int(tolower(charArr[j][k]));
                    sum2 += int(tolower(charArr[j+1][k]));
                    k++;
                }

                // check if swap needed
                if (sum1 > sum2) {
                    for (k = 0; k < letter; k++) {
                        temp = charArr[j][k];
                        charArr[j][k] = charArr[j + 1][k];
                        charArr[j + 1][k] = temp;
                    }
                    flag = 0;
                }
            }
            // if no swap break;
            if (flag) {
                break;
            }
        }

        // print array
        for (i = 0; i < letter; i++) {
            for (j = 0; j < word; j++) {
                cout << charArr[j][i];
            }
            cout << endl;
        }

        cout << endl;
        cin >> letter;
        cin >> word;
    }
}
