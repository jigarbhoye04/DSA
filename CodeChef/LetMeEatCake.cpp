#include <iostream>
#include <cmath>
using namespace std;

int solve(int A, int B) {
    int eaten = 0;

    while (A != B) {
        if (A > B) {
            int slc = ceil(A / 2.0);
            eaten += slc;
            A -= slc;
        } else {
            int slc = ceil(B / 2.0);
            eaten += slc;
            B -= slc;
        }
    }

    return eaten;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;
        cout << solve(A, B) << endl;
    }

    return 0;
}