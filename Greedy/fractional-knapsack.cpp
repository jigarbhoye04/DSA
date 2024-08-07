// https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value;
    int weight;
};

// } Driver Code Ends
// class implemented
class Solution {
public:
    double fractionalKnapsack(int w, Item arr[], int n) {
        //custom comparator used.
        sort(arr,arr+n,[](Item& a,Item& b){
            double num1 = (double)a.value/(double)a.weight;
            double num2 = (double)b.value/(double)b.weight;
            return num1 > num2;
        });
        
        double maxVal = 0.0;
        int cw = 0;
        
        for(int i=0;i<n;i++){
            if(cw + arr[i].weight <= w){
                cw += arr[i].weight;
                maxVal += arr[i].value;
            }else{
                int rw = w - cw;
                maxVal += (double)arr[i].value/(double)arr[i].weight * (double)rw;
                break;
            }
        }
        return maxVal;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    // taking testcases
    cin >> t;
    cout << setprecision(6) << fixed;
    while (t--) {
        // size of array and weight
        int n, W;
        cin >> n >> W;

        Item arr[n];
        // value and weight of each item
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value >> arr[i].weight;
        }

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(W, arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends