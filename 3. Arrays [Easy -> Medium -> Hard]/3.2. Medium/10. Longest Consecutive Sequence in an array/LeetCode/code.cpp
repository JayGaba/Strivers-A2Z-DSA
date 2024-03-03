class Solution {
public:
    
    int longestConsecutive(vector<int> &num) {
        // write your code here
        int x = 0, y = 1;
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
            ans = max(ans, count);
            x++,y++;
            
        }
        return ans;
    }
};