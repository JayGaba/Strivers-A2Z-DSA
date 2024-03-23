pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	// Write your code here.
	pair<int, int> ans;
	if(arr[0] == x){
		ans.first = arr[0];
		ans.second = arr[0];
		return ans;
	}
	else if(arr[0]>x){
		ans.first = -1;
		ans.second = arr[0];
		return ans;
	}
	else if (arr[n-1]==x){
		ans.first = arr[n-1];
		ans.second = arr[n-1];
		return ans;
	}
	else if (arr[n-1]<x){
		ans.first = arr[n-1];
		ans.second = -1;
		return ans;
	}
	int s = 0; 
	int e = n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==x){
			ans.first = arr[mid];
			ans.second = arr[mid];
			return ans;
		}
		else if (arr[mid] > x && arr[mid-1]<x){
			ans.first = arr[mid-1];
			ans.second = arr[mid];
			return ans;
		}
		else if (arr[mid] > x){
			e=mid-1;
		}
		else if (arr[mid]<x){
			s = mid+1;
		}
	}
}