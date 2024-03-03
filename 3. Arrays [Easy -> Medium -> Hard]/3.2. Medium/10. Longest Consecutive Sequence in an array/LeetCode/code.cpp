class Solution {
public:
    /**
     * @param num: A list of integers
     * @return: An integer
     */
    int longestConsecutive(vector<int> &num) {
        // write your code here
        int x = 0, y = 0;
        int n = num.size();
        int count = 1;
        int ans = 0;
        sort(num.begin(), num.end());
        while(y<n){
            if(num[y] - num[x] == 1){
                count++;
            }else{
                count = 1;
            }
            x++,y++;
            ans = max(ans, count);
        }
        return ans;
    }
};