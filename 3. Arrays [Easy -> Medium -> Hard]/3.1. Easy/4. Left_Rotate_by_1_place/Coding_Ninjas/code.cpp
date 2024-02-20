//first approach
//extra space - O(1) no extra space taken
//space being used - O(n) we are using the given array
#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int temp  = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}


//approaches learnt =>
