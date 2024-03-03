vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector <int> ans ;
    int n = a.size();
    ans.push_back(a[n-1]);
    for(int i = n-2; i  >=0 ; i--){
        if(ans.back()<a[i]){
            ans.push_back(a[i]);
        }
    }
    return ans;
}