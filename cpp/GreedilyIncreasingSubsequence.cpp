// Greedily Increasing Subsequence

#include <iostream>
#include <math.h>
#include <list> 

using namespace std;

int main()
{
    int sizeA, temp, max, sum;
    int i;
    list <int> nums;
    int flag;

    cin >> sizeA;

    sum = 0;
    flag = 1;
    for (i = 0; i < sizeA; i++) {
        cin >> temp;
        nums.push_back(temp);

        if (flag) {
            flag = 0;
            max = temp;
            sum++;
        }
        else {
            if (temp > max) {
                sum++;
                max = temp;
            }
        }
        
    }

    cout << sum << endl;

    flag = 1;
    for (i = 0; i < sizeA; i++) {
        temp = nums.front();

        if (flag) {
            flag = 0;
            max = nums.front();
            nums.pop_front();
            cout << max << ' ';
        }
        else {
            if (temp > max) {
                max = temp;
                nums.pop_front();
                cout << temp << ' ';
            }
            else {
                nums.pop_front();
            }
        }
    }

}