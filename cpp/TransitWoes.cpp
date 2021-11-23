// Transit Woes

#include <iostream>
using namespace std;

int main() {
    int s, t, n, i, totalTime;
    int walkTime[20];
    int rideTime[20];
    int busInterval, busTime;
    int currentTime;
    
    cin >> s;
    cin >> t;
    cin >> n;
    
    totalTime = 0;
    
    // add the walking times
    for (i = 0; i <= n; i++){
        cin >> walkTime[i];
        totalTime += walkTime[i];
    }
    
    // add the bus ride times
    for (i = 0; i < n; i++){
        cin >> rideTime[i];
        totalTime += rideTime[i];
    }
    

    // add the waiting times
    for (i = 0; i < n; i++){
        cin >> busInterval;
        
        // if came without bus ride
        if (i == 0){
            currentTime = s + walkTime[i];
            if (currentTime%busInterval != 0){ // if arrived not on time
                totalTime += busInterval - currentTime%busInterval;
                currentTime += busInterval - currentTime%busInterval;
            }
        }
        
        // if came after bus
        else{
            currentTime += rideTime[i-1] + walkTime[i];
            if (currentTime%busInterval != 0){ // if arrived not on time
                totalTime += busInterval - currentTime%busInterval;
                currentTime += busInterval - currentTime%busInterval;
            }
        }
    }
    
    totalTime += walkTime[n];
    
    if (totalTime <= (t-s))
        cout << "yes" << endl;
    else 
        cout <<  "no" << endl;
    return 0;
}
 rss feed 