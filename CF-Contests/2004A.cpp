#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool solve(const vector<int> &pts){
        int n = pts.size();
        if (n <= 1)
            return true; 

        int min_point = *min_element(pts.begin(), pts.end());
        int max_point = *max_element(pts.begin(), pts.end());

        bool caLeft = true;
        for (int i = 1; i < n; i++){
            if (pts[i] - min_point <= min_point - (min_point - 1)){
                caLeft = false;
                break;
            }
        }
        if (caLeft)
            return true;

        bool caRight = true;
        for (int i = 0; i < n - 1; i++){
            if (max_point - pts[i] <= (max_point + 1) - max_point){
                caRight = false;
                break;
            }
        }
        if (caRight)
            return true;

        for (int i = 0; i < n - 1; i++){
            int mid = (pts[i] + pts[i + 1]) / 2;
            if (mid > pts[i] && mid < pts[i + 1]){
                bool can_add = true;
                for (int j = 0; j < n; j++){
                    if (j != i && j != i + 1){
                        if (abs(pts[j] - mid) <= min(abs(pts[j] - pts[i]), abs(pts[j] - pts[i + 1]))){
                            can_add = false;
                            break;
                        }
                    }
                }
                if (can_add)
                    return true;
            }
        }
        return false;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> pts(n);
        for (int i = 0; i < n; i++){
            cin >> pts[i];
        }
        sort(pts.begin(), pts.end());
        if (obj.solve(pts)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}



//fck bc not solved : Flag(RED)