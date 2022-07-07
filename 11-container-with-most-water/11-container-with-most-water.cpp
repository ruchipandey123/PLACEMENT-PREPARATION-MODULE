class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
        int low=0;
        int high=height.size()-1;
        while(low<=high)
        {
            int hl=height[low];
            int hr=height[high];
            int curr_water=min(hl,hr)*(high-low);
            if(curr_water>max_water)
            {
                max_water=curr_water;
            }
            if(hl<=hr)
            {
                low+=1;
            }
            if(hr<=hl)
            {
                high-=1;
            }
        }
        return max_water;
    }
};