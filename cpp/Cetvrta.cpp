// Cetvrta

#include <iostream>
using namespace std;

int main() {
    int a1, a2, b1, b2, c1, c2;
    int AB1, AB2, BC1, BC2, AC1, AC2;
    int dot, d1, d2;

    cin >> a1;
    cin >> a2;
    cin >> b1;
    cin >> b2;
    cin >> c1;
    cin >> c2;

    // find vector AB
    AB1 = b1 - a1;
    AB2 = b2 - a2;

    // find vector BC
    BC1 = c1 - b1;
    BC2 = c2 - b2;

    // find vector AC
    AC1 = c1 - a1;
    AC2 = c2 - a2;


    if (AB1 * BC1 + AB2 * BC2 == 0) { // B is mid
        d1 = c1 - AB1;
        d2 = c2 - AB2;
    }
    else if (AB1 * AC1 + AB2 * AC2 == 0){ // A is mid
        d1 = b1 + AC1;
        d2 = b2 + AC2;
    }
    else { // C is mid
        d1 = a1 - BC1;
        d2 = a2 - BC2;
    }

    cout << d1 << " " << d2 << endl;



    return 0;
}