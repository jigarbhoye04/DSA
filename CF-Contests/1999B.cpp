#include<bits/stdc++.h>
using namespace std;

class Jigx {
public:
    void solve() {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int wins = 0;

        int sc[] = {a1, a2};
        int slck[] = {b1, b2};

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int sunitr1 = sc[i];
                int sunitr2 = sc[1 - i];
                int slavikr1 = slck[j];
                int slavikr2 = slck[1 - j];

                int swins = 0;
                int slckwins = 0;


                if (sunitr1 > slavikr1) {
                    swins++;
                } else if (sunitr1 < slavikr1) {
                    slckwins++;
                }

                if (sunitr2 > slavikr2) {
                    swins++;
                } else if (sunitr2 < slavikr2) {
                    slckwins++;
                }

                if (swins > slckwins) {
                    wins++;
                }
            }
        }
        cout << wins << endl;
    }
};

int main() {
    Jigx obj;
    int t;
    cin >> t;
    while (t--) {
        obj.solve();
    }
    return 0;
}
