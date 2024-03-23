int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	if(arr[0]>=x)	return 0;
	if(arr[n-1]<x)	return n;
	int s=0;
	int e=n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid] == x || (arr[mid]>x && arr[mid-1]<x)){
			return mid;
		}
		else if(arr[mid]<x){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
}
