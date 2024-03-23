int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int s = 0, e = arr.size()-1;
	int ans = arr.size();
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] >= m){
			ans = mid;
			e = mid - 1;
		}else{
			s = mid+1;
		}

	}
	return ans;
}