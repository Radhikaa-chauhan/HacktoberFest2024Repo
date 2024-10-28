#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // To avoid overflow

        // Check if the target is present at mid
        if (arr[mid] == target) {
            return mid;  // Target found, return index
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    return -1;  // Target not found
}

int main() {
    vector<int> arr = {2, 4, 7, 10, 23, 45, 78};  // Sorted array
    int target;
    
    cout << "Enter the number you want to search for: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
