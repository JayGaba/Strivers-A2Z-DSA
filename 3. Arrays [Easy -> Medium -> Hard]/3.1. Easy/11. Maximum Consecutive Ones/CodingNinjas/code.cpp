int consecutiveOnes(vector<int>& arr){

    int maxe = 0;
    int counter = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 1){
            counter++;
            maxe = max(counter, maxe);
        }else{
            counter = 0;
        }
    }
    return maxe;
}