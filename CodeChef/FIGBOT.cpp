#include<bits/stdc++.h>
using namespace std;

bool solve(int pLen, int tx, int ty, const string& mov) {
    int curX = 0, curY = 0;

    for (int step = 1; step <= pLen; ++step) {
        switch (mov[step - 1]) {
            case 'U': ++curY; break;
            case 'D': --curY; break;
            case 'L': --curX; break;
            case 'R': ++curX; break;
        }

        int dist = abs(tx - curX) + abs(ty - curY);
        if (dist <= step && dist % 2 == step % 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int pLen, tx, ty;
        string mov;
        cin >> pLen >> tx >> ty >> mov;

        if (solve(pLen, tx, ty, mov)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}