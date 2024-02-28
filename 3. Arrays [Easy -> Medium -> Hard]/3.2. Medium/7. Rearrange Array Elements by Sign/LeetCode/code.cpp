class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int even = 0, odd = 0;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0 ){
                ans[2*even] = nums[i];
                even++;
            }else{
                ans[2*odd+1] = nums[i];
                odd++;
            }
        }
        return ans;
    }
};