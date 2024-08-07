#include<bits/stdc++.h>
using namespace std;
 
class jigx {
public:
    void solve(){
        int n; 
        cin >> n;
        int tens = n / 10; 
        int ones = n % 10; 

        int digit_sum = tens + ones;
        cout << digit_sum << endl;
    }
    
};
 
int main(){
    jigx obj;
    int t;
    cin>>t;
    while(t--){
        obj.solve();
    }
    return 0;
}

