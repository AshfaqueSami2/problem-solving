#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        if (arr[i] < 38) {
            result[i] = arr[i];
        } else {
            int f = arr[i] + 1;
            int s = arr[i] + 2;

            if (f % 5 == 0) {
                result[i] = f;
            } else if (s % 5 == 0) {
                result[i] = s;
            } else {
                result[i] = arr[i];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << endl;
    }

}
