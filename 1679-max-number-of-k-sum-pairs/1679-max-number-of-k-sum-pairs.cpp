class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        int start=0;
        int end=nums.size()-1;
        while(start<end)
        {
            if(nums[start]+nums[end]==k)
            {
                count+=1;
                start++;
                end--;
            }
            else if(nums[start]+nums[end]<k)
            {
                start++;
            }
            else{
                end--;
            }
        }
        return count;
    }
};