//brute force - 1st approach [issue - O(n) space complexity]
#include <bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	unordered_set <int> x;
	for(int i : arr){
		x.insert(i);

	}
	return x.size();
}

//approach learnt =>

#include <bits/stdc++.h>

int removeDuplicates(vector<int> &arr, int n) {
	int i = 0;
	for(int j = 1; j < n; j++){
		if(arr[i]!=arr[j]){
			arr[i+1] = arr[j]; //gputs the unique element next to i so that the beginning of the array contains all the unique elements
			i++;
		}
	}
	return i+1;
}