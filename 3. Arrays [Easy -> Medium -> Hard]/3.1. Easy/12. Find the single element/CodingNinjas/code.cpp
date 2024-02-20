//my approach(using map)
#include<vector>
using namespace std;
int getSingleElement(vector<int> &arr){
	// Write your code here.
	unordered_map<int,int>cnt;
    for(int i=0;i<arr.size();i++)
    cnt[arr[i]]++;
    for(auto& c:cnt){
    	if (c.second < 2) {
      		return c.first;
    	}
    }   

    return 1;

}

//optimized approach(using xor :) =>
#include<vector>
using namespace std;
int getSingleElement(vector<int> &arr){
	int xor1 = 0;
	for(int i = 0; i < arr.size(); i++){
		xor1 = xor1^arr[i];
	}
	return xor1;

}
	
