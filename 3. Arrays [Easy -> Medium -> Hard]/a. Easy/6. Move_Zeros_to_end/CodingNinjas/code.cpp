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
