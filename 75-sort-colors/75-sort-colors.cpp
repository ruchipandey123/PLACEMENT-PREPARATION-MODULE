class Solution {
public:
    void sortColors(vector<int>& nums) {
        int first=0;
        int mid=0;
        int last=nums.size()-1;
        while(mid<=last)
        {
            if(nums[mid]==0)
            {
                swap(nums[first++],nums[mid++]);
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[last--]);
            }
        }
    }
};