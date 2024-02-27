// very informative - https://leetcode.com/problems/majority-element/solutions/4713706/6-ways-to-solve-brute-d-c-sort-hashing-bit-manipulation-moore/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                count = 1;
                el = nums[i];
            }
            else if(el==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt= 0;
        for(int i = 0; i < nums.size(); i++){
            if(el == nums[i]){
                cnt++;
            }
        }
        if(cnt > nums.size()/2){
            return el;
        }
        return -1;
    }
};