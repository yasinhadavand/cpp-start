#include <iostream>
#include <ctime>

// Linear Search Function
int linearSearch(const int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;  // Key found at index i
        }
    }
    return -1;  // Key not found
}

// Binary Search Function
int binarySearch(const int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;  // Key found at index mid
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // Key not found
}

int main() {
    const int arr[] = {3, 6, 23, 35, 42, 88, 155, 434, 570, 678, 732, 755, 812, 834, 900, 945};
    const int size = sizeof(arr) / sizeof(arr[0]);

    // Linear Search
    clock_t startLinear = clock();
    int linearResult = linearSearch(arr, size, 755);
    clock_t endLinear = clock();
    double linearTime = double(endLinear - startLinear) / CLOCKS_PER_SEC;

    // Binary Search (Array must be sorted for binary search)
    clock_t startBinary = clock();
    int binaryResult = binarySearch(arr, size, 755);
    clock_t endBinary = clock();
    double binaryTime = double(endBinary - startBinary) / CLOCKS_PER_SEC;

    // Output Results
    if (linearResult != -1) {
        std::cout << "Linear Search: Key found at index " << linearResult << " in " << linearTime << " seconds.\n";
    } else {
        std::cout << "Linear Search: Key not found in " << linearTime << " seconds.\n";
    }

    if (binaryResult != -1) {
        std::cout << "Binary Search: Key found at index " << binaryResult << " in " << binaryTime << " seconds.\n";
    } else {
        std::cout << "Binary Search: Key not found in " << binaryTime << " seconds.\n";
    }

    return 0;
}
