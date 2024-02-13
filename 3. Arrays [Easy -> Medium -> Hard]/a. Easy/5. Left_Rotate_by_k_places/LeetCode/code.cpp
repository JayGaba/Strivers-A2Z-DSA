class Solution {
public:
    void rotate(vector<int>& nums, int k) {\
        vector <int> t(nums.size());
        for(int i = 0; i<nums.size();i++){
            t[(i+k)%nums.size()] = nums[i];
        }
        nums = t;
    }
};