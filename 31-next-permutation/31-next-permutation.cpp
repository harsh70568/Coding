class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i;
        for(i = n-2; i >= 0; i--)
        {
            if(nums[i+1] > nums[i])
            {
                break;
            }
        }
        if(i < 0)
        {
            return reverse(nums.begin(),nums.end());
        }
        
        int j;
        for(j = n-1; j > i; j--)
        {
            if(nums[j] > nums[i])
            {
                break;
            }
        }
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
        
    }
};