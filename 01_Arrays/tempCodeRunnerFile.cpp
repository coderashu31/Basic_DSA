int findIndex(vector<int> arr, int key){
    // Sort the array O(nlog n)
    sort(arr.begin(), arr.end());

    // Binary Search: O(log n)
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}