class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxe = 0;
        int counter = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                counter++;
                maxe = max(counter, maxe);
            }else{
                counter = 0;
            }

        }
        return maxe;
        
    }
};