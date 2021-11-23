// CD

#include <iostream>
#include <math.h>
#include <cctype>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <queue>
#include <utility> 
#include <functional> 
#include <stdio.h> 
#include <stdlib.h> 

using namespace std;

int main()
{
    int jack, jill, temp, same;
    int i, j, k, flag;
    unordered_set <int> CDs;
    //bool cds[1000001] = { false };

    cin >> jack;
    cin >> jill;

    while (jack != 0 && jill != 0) {
        CDs.clear();
        same = 0;

        for (i = 0; i < jack; i++) {
            cin >> temp;
            CDs.insert(temp);
        }

        for (i = 0; i < jill; i++) {
            cin >> temp;
            if (CDs.find(temp) != CDs.end()) {
                same++;
            }
        }

        cout << same << endl;
        cin >> jack;
        cin >> jill;
    }

}