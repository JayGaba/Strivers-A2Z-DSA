vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> ans(a.size());
    int even = 0, odd = 0;
    for (int i = 0; i < a.size(); i++){
        if(a[i] >= 0 ){
            ans[2*even] = a[i];
            even++;
        }else{
            ans[2*odd+1] = a[i];
            odd++;
        }
    }
    return ans;
    
}