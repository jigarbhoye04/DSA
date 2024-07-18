class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_map<int, int> seqMap;
        int maxLength = 0;

        for (int num : nums) {
            // If num is already part of a sequence, skip it
            if (seqMap.find(num) != seqMap.end()) continue;

            int leftLength = seqMap.find(num - 1) != seqMap.end() ? seqMap[num - 1] : 0;
            int rightLength = seqMap.find(num + 1) != seqMap.end() ? seqMap[num + 1] : 0;

            // Total length of the sequence that num belongs to
            int currentLength = leftLength + 1 + rightLength;

            // Update the maximum length found
            maxLength = max(maxLength, currentLength);

            // Update the boundaries of the sequence
            seqMap[num] = currentLength;
            seqMap[num - leftLength] = currentLength;
            seqMap[num + rightLength] = currentLength;
        }

        return maxLength;
    }
};
