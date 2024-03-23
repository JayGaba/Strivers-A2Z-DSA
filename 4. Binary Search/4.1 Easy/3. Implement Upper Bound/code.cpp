int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	if(arr[0]>x) return 0;
    if(arr[n-1]<=x) return n;
	int s = 0, e = n - 1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] == x){
			s = mid+1;
		}
		if((arr[mid]>x && arr[mid-1]<=x)){
			return mid;
		}
		else if(x > arr[mid]){
			s = mid+1;
		}
		else if(x < arr[mid]){
			e = mid - 1;
		}
	}


}