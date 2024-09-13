#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char target[10][10];

        // Input the target grid
        for (int i = 0; i < 10; i++) {
            cin >> target[i];
        }

        int totalPoints = 0;
        
        // Calculate the points
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (target[i][j] == 'X') {
                    int distance = (i - 4) * (i - 4) + (j - 4) * (j - 4);
                    if (distance <= 16) {
                        totalPoints += 5;
                    } else if (distance <= 36) {
                        totalPoints += 4;
                    } else if (distance <= 64) {
                        totalPoints += 3;
                    } else if (distance <= 100) {
                        totalPoints += 2;
                    } else {
                        totalPoints += 1;
                    }
                }
            }
        }

        // Output the total points for the current test case
        cout << totalPoints << endl;
    }

    return 0;
}
