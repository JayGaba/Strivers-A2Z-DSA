vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.
    int i = 0, j = 1;
    while(j<n){
        if(arr[i] == 0 && arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
        if(arr[i] == 0 && arr[j] == 0){
            j++;
        } else {
            i++;
            j++;
        }
    }
    return arr;
}

//approach learnt =>
vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    
    if( j == -1){
        return arr;
    }
    
    for(int i = j+1; i<n; i++){
        if( arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

