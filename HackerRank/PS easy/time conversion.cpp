#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string hours = s.substr(0, 2);
    string minutes = s.substr(3, 2);
    string seconds = s.substr(6, 2);
    string period = s.substr(8, 2);
    int hoursint = stoi(hours);

    if (period == "PM") {
        if (hoursint != 12) {
            hoursint += 12;
        }
    } else if (period == "AM") {
        if (hoursint == 12) {
            hoursint = 0;
        }
    }

    string hours24;
    if (hoursint < 10) {
        hours24 = "0" + to_string(hoursint);
    } else {
        hours24 = to_string(hoursint);
    }

    string maintime = hours24 + ":" + minutes + ":" + seconds;
    cout << maintime << endl;

}
