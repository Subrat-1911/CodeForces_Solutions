#include <iostream>

using namespace std;

void solveWatermelon() {
    int weight;
    if (cin >> weight) {
        // Bitwise AND use kiya hai even check karne ke liye
        // aur weight 2 se bada hona chahiye
        if (weight > 2 && (weight & 1) == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    // Fast I/O taaki execution time alag aaye
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solveWatermelon();
    
    return 0;
}