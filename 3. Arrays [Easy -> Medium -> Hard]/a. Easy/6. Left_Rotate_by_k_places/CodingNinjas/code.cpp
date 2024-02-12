//my approach
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int> v;
    for(int i = 0; i < k; i++){
        v.push_back(arr[i]);
    }

    for(int i = 0; i < arr.size()-k ; i++){
        arr[i] = arr[i+k];
    }
    int j = 0;
    for(int i = arr.size()-k; i < arr.size(); i++){
        arr[i] = v[j];      //arr[i] = v[i-(n-d)]
        j++;
    }
    return arr;
}


