#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    double myPow(double x, int n) {
        //solving
        if(n==0) return 1;
        if(n==1) return x;
        if(n==-1) return 1/x;
        double half=myPow(x,n/2);
        double full=half*half;
        if(n%2==0) return full;
        if(n>0) return full*x;
        return full/x;
    }
};
 
int main(){
    Solution obj;
    return 0;
}