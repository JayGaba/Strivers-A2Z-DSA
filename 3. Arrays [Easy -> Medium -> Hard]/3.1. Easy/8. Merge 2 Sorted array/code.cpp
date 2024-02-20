//my approach

#include <bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector <int> ans;
    set<int> s;
    int n1 = a.size();
    int n2 = b.size();
    for( int i = 0; i < n1; i++){
        s.insert(a[i]);
    }

    for( int i = 0; i < n2; i++){
        s.insert(b[i]);
    }

    for(int i : s){
        ans.push_back(i);
    }
    
    return ans;
}