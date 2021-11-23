// Disastrous Downtime
#include <iostream>
#include <math.h>
#include <queue> 

using namespace std;

int main()
{
    int totalOrders, maxPerServer, oldestTime, current_time, orderTime, numOrders, maxOrders;
    queue <int> orderTimings;
    int i;

    cin >> totalOrders;
    cin >> maxPerServer;

    maxOrders = 1;
    numOrders = 1;
    cin >> oldestTime;

    

    // find max number of concurrent orders
    for (i = 0; i < totalOrders-1; i++) {
        
        cin >> orderTime;
        orderTimings.push(orderTime);
        numOrders++;

        while(orderTime >= oldestTime + 1000){
            oldestTime = orderTimings.front();
            orderTimings.pop();
            numOrders--;
        }

        if (numOrders > maxOrders) {
            maxOrders = numOrders;
        }       
    }

    cout << ceil(float(maxOrders)/float(maxPerServer));
}
