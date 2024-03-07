//using hashmaps
#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	vector<int> ans;
	map<int, int> mpp;
	int n = v.size();
	int mini = (int)(n/3)+1;
	for(int i = 0; i < n; i++){
		mpp[v[i]]++;
		if(mpp[v[i]] == mini){
			ans.push_back(v[i]);
		}
		if(ans.size() == 2)	break;
	}
	return ans;
}

//optimized approach ->
#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	int cnt1 = 0, cnt2 = 0;
	int el1 = INT_MIN, el2 = INT_MIN;
	for(int i = 0; i < v.size(); i++){
		if(cnt1 == 0 && el2!=v[i]){
			cnt1 = 1;
			el1 = v[i];
		}
		else if(cnt2 == 0 && el1!=v[i]){
			cnt2 = 1;
			el2 = v[i];
		}
		else if(v[i] == el1) cnt1++;
		else if(v[i] == el2) cnt2++;
		else{
			cnt1--;
			cnt2--;
		}
	}
	vector<int> ls;
	cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == el1) cnt1++;
		if(v[i] == el2) cnt2++;
	}
	if(cnt1 > v.size()/3) ls.push_back(el1);
    if(cnt2 > v.size()/3) ls.push_back(el2);
    return ls;
}