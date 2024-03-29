//my approach - didnt work for [0]
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

//optimal approach -->
class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        unordered_set<int> hashSet(num.begin(), num.end());
        int longestStreak = 0;

        for(int i : num) {
            if(!hashSet.count(i - 1)) {
                int currentNum = i;
                int currentStreak = 1;

                while(hashSet.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
