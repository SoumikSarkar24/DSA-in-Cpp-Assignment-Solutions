#include <iostream>
#include <climits>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}

int findElement(int arr[], int x) { 
    int index = 1;
    while (arr[index] < x) {
        index *= 2;
        if (arr[index] == INT_MAX) {
            break;  
        }
    }
    return binarySearch(arr, index / 2, index, x);
}

int main() { 
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, INT_MAX};
    
    int x = 19;
    int result = findElement(arr, x);

    if (result != -1)
        cout << "Element " << x << " is present at index " << result << endl;
    else
        cout << "Element " << x << " is not present in the array" << endl;
    return 0;
}
