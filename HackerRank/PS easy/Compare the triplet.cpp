#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    cin >> x >> y >> z;

    int alice = 0, bob = 0;

    if (a > x) alice++;
    else if (a < x) bob++;

    if (b > y) alice++;
    else if (b < y) bob++;

    if (c > z) alice++;
    else if (c < z) bob++;

    cout << alice << " " << bob << endl;


}
