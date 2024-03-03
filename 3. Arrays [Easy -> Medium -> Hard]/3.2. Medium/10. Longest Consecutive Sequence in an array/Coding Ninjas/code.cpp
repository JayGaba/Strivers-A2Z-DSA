#include <bits/stdc++.h>
int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    int count = 1;
    int x = 0, y = 1;
    int ans = 0;
    sort(a.begin(), a.end());
    while(y<n)
    {    
        if((a[y]-a[x]) == 1){
            count++;
        }
        else if (a[y] - a[x] > 1){
            count = 1;
        }
        ans = max(ans, count);
        x++,y++;
    }
    return ans;
}