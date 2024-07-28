#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K) {
        unordered_map<int, int> sumMap;
        int cumSum = 0;
        int maxLen = 0;

        //-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6
        for (int i = 0; i < N; ++i) {
            cumSum += A[i];

            if (cumSum == K) {
                maxLen = i + 1;
            }

            if (sumMap.find(cumSum - K) != sumMap.end()) {
                maxLen = max(maxLen, i - sumMap[cumSum - K]);
            }

            if (sumMap.find(cumSum) == sumMap.end()) {
                sumMap[cumSum] = i;
            }
        }
        return maxLen;
    }
};

int main()
{
    Solution obj;
    int N = 17;
    int K = 15;
    int A[] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    cout << obj.lenOfLongSubarr(A, N, K) << endl;
    return 0;
}
