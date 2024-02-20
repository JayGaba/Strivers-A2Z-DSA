//brute force approach
string read(int n, vector<int> a, int target)
{
    // Write your code here.
    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] == target){
                return "YES";
            }
        }
    }
    return "NO";
}

//better approach
#include <bits/stdc++.h>
string read(int n, vector<int> a, int target)
{
    map<int, int> hash;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int more = target - x;
        if(hash.find(more) != hash.end()){
            return "YES";
        }
        hash[x] = i;

    }
    return "NO";
}

//optimal approach same TC but not using map 2 ptr approach
#include <bits/stdc++.h>
using namespace std;
string read(int n, vector<int> a, int target)
{
    int s = 0, e = n-1;
    sort(a.begin(), a.end());
    while(s<e){
        if (a[s] + a[e] < target){
            s++;
        }
        if (a[s] + a[e] > target){
            e--;
        }
        if (a[s] + a[e] == target){
            return "YES";
        }
    }
    return "NO";
}
