int firstOcc(vector<int> &arr, int size, int key) {
  int low = 0;
  int high = size - 1;
  int mid = low + (high - low) / 2;
  int ans = -1;
  while (low <= high) {
    if (arr[mid] == key) {
      ans = mid;
      high = mid - 1;
    } else if (key > arr[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
     mid = low + (high - low) / 2;
  } 
return ans;
}
int lastOcc(vector<int> &arr, int size, int key) {
  int low = 0;
  int high = size - 1;
  int mid = low + (high - low) / 2;
  int ans = -1;
  while (low <= high) {
    if (arr[mid] == key) {
      ans = mid;
      low = mid + 1;
    } else if (key > arr[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  mid = low + (high - low) / 2;
  }
  return ans;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  pair<int, int> p;
  p.first = firstOcc(arr, n, k);
  p.second = lastOcc(arr, n, k);
  return p;
}