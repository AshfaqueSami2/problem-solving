#include <iostream>
using namespace std;
int ctz(int a) {
    int cnt = 0;
    while ((a & 1) == 0) {
        a = a/2;  
        cnt++;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;

    int result = ctz(n);
    cout << result << endl;

}
