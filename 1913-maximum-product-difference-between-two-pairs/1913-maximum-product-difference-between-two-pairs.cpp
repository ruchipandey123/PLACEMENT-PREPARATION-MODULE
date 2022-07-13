class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last=nums.size()-1;
        int ans=nums[last]*nums[last-1]-nums[0]*nums[1];
        return ans;
    }
};