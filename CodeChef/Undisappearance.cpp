#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            vector<int> newArr = arr;
            for (int i = l; i <= r; i++) {
                if (newArr[i] == 1) {
                    newArr[i] = 2;
                } else if (newArr[i] == 2) {
                    newArr[i] = 3;
                } else {
                    newArr[i] = 1;
                }
            }
            bool ones = false, twoes = false, threes = false;
            for (int num : newArr) {
                if (num == 1) ones = true;
                else if (num == 2) twoes = true;
                else threes = true;
            }
            if (ones && twoes && threes) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        cout << solve(arr) << endl;
    }
    return 0;
}