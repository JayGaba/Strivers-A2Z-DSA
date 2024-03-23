int findKRotation(vector<int> &arr){
    // Write your code here.
    int low = 0;
	int high = arr.size() - 1;
	int ans = 0;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[low] <= arr[mid]){
            if(arr[ans]>=arr[low]){
                ans = low;
            }
            low=mid+1;
		}
		else{
			high = mid-1;
            ans = mid;
		}
	}
	return ans;

}