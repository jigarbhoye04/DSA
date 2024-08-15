#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution {
public:
    ll solve(vector<int>& a) {
        int n = a.size();
        ll current_sum = 0;
        int prev_sign = 0;
        int max_element = INT_MIN;

        for (int i = 0; i < n; i++) {
            int current_sign = (a[i] > 0) ? 1 : -1;
            
            if (prev_sign == 0 || current_sign != prev_sign) {
                current_sum += a[i];
                prev_sign = current_sign;
                max_element = a[i];
            } else {
                if (a[i] > max_element) {
                    current_sum = current_sum - max_element + a[i];
                    max_element = a[i];
                }
            }
        }

        return current_sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    Solution obj;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << obj.solve(a) << "\n";
    }

    return 0;
}