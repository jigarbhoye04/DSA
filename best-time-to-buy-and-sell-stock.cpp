class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxPrice=0;
        int mini=prices[0];

        for(int i=1;i<prices.size();i++){
            mini=min(mini,prices[i]);
            int x = prices[i]-mini;
            maxPrice=max(x,maxPrice);
        }

        return maxPrice;
    }
};

