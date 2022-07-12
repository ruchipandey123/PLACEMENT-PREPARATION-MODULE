class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans(prices);
        stack<int> s;
        s.push(0);
        for(int i=prices.size()-1;i>=0;i--)
        {
            while(s.top()>prices[i])
            {
                s.pop();
            }
            ans[i]=prices[i]-s.top();
            s.push(prices[i]);
        }
        return ans;
    }
};