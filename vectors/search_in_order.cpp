#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[n] = {1, 3, 4, 5, 6, 4, 4};
    int target = 5;

    // Sort array in ascending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Binary search for the target value
    int left = 0;
    int right = n - 1;
    bool targetFound = false;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            targetFound = true;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (targetFound) {
        cout << "Target value " << target << " found in the array." << endl;
    } else {
        cout << "Target value " << target << " not found in the array." << endl;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}
