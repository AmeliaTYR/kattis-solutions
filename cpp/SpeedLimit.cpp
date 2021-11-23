// Speed Limit

#include <iostream>
using namespace std;

int main() {
    int n, i;
    int curTime, newTime, speed, totalDist;
    
    cin >> n;
    
    while (n != -1){
        // read in speed data
        totalDist = 0;
        curTime = 0;
        for (i = 0; i < n; i++){
            cin >> speed;
            cin >> newTime;
            totalDist += (newTime - curTime) * speed;
            curTime = newTime;
        }
        cout << totalDist << " miles" << endl;
        cin >> n;
    }

    return 0;
}
