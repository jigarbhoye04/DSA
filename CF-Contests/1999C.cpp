#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void solve(int t, const vector<int>& ns, const vector<int>& ss, const vector<int>& ms, const vector<vector<pair<int, int>>>& tl) {
        vector<string> results;
        for (int i = 0; i < t; i++) {
            int n = ns[i];
            int s = ss[i];
            int m = ms[i];
            const auto& tasks = tl[i];
            
            bool shwr = false;
            
            if (n == 0) {
                if (m >= s) {
                    shwr = true;
                }
            } else {
                if (tasks[0].first >= s) {
                    shwr = true;
                }

                for (int i = 0; i < n - 1; i++) {
                    if (tasks[i + 1].first - tasks[i].second >= s) {
                        shwr = true;
                    }
                }

                if (m - tasks[n - 1].second >= s) {
                    shwr = true;
                }
            }
            cout<<(shwr ? "YES" : "NO")<<endl;

        }
        
        return;
    }
};

int main() {
    Solution obj;
    int t;
    cin >> t;
    
    vector<int> ns(t);
    vector<int> ss(t);
    vector<int> ms(t);
    vector<vector<pair<int, int>>> tl(t);

    int index = 0;
    while (index < t) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> tasks(n);
        for (int j = 0; j < n; j++) {
            cin >> tasks[j].first >> tasks[j].second;
        }
        
        ns[index] = n;
        ss[index] = s;
        ms[index] = m;
        tl[index] = tasks;
        
        index++;
    }
    
    obj.solve(t, ns, ss, ms, tl);
}



/*
tl-task list
shwr- can take shower
*/
