int majorityElement(vector<int>& v) {
    unordered_map<int, int> mpp;
    int majority = v.size() / 2;

    for (int i = 0; i < v.size(); i++) {
      mpp[v[i]]++;
    }

	for(auto it : mpp){
		if(it.second > majority){
			return it.first;
		}
	}
    return -1;
}
//optimal solution -> moore's voting algo cute algo
int majorityElement(vector<int>& v) {
    int el, cnt = 0;
	for(int i = 0; i < v.size(); i++){
		if(cnt == 0){
			cnt = 1; 
			el = v[i];
		}
		else if(v[i] == el){
			cnt++;
		}
		else{
			cnt--;
		}
		
	}
	int count = 0;
	for(int i = 0; i < v.size(); i++){
		if(v[i] == el){
			count++;
		}
	}
	if(count > (v.size()/2)){
		return el;
	}
	return -1;
}