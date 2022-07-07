class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(m);
        for(int i=0;i<m;i++){
            res[i]=nums1[i];
        }
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(res[i]<nums2[j]){
                nums1[k++]=res[i++];
            }
            else{
                nums1[k++]=nums2[j++];
            }
        }
        while(i<m){
            nums1[k++]=res[i++];
        }
        while(j<n){
            nums1[k++]=nums2[j++];
        }
    }
};