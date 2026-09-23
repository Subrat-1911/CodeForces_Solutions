#include <iostream>
#include <string>

using namespace std;

int main() {
    int totalKids, timeSec;
    if (!(cin >> totalKids >> timeSec)) return 0;

    string queueOrder;
    cin >> queueOrder;

    for (int step = 0; step < timeSec; ++step) {
        int idx = 0;
        while (idx < totalKids - 1) {
            if (queueOrder[idx] == 'B' && queueOrder[idx + 1] == 'G') {
                char temp = queueOrder[idx];
                queueOrder[idx] = queueOrder[idx + 1];
                queueOrder[idx + 1] = temp;
                idx += 2;
            } else {
                idx++;
            }
        }
    }

    cout << queueOrder << "\n";
    return 0;
}