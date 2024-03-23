int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int low = 0;
	int high = n-1;
	int count = 0;
	while(low<=high){
		int mid  = (low+high)/2;
		if(arr[mid] == x){
			count++;
			int left = mid-1;
			while(left>=0 && arr[left]==x){
				count++;
				left--;
			}
			int right = mid+1;
			while(right<n && arr[right] == x){
				count++;
				right++;
			}
			return count;
		}
		else if(arr[mid]<x){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return count;
}
