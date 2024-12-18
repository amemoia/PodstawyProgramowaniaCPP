#include <iostream>


// found in <cstdlib> or <algorithm>: bsearch(const void* key, const void ptr*, count, size, comparator)
// key - pointer to element to search for
// ptr - pointer to array to examine
// count - number of array elements
// size - size of each element in bytes
// comp - (a - b) => negative if smaller, positive if bigger, 0 if equal
// comp = int cmp(const void *a, const void *b);
// returns nullptr if key not in ptr

int binarySearch(int arr[], int start, int end, int value) {
    int middle = (start+end)/2;
    if (middle >= start && middle <= end) {
        if (arr[middle] == value) return middle;
        else if (arr[middle] > value) return binarySearch(arr, start, middle-1, value);
        else return binarySearch(arr, middle+1, end, value);
    }
    else return -1;
}

int main() {
    int arr[] = {1, 2, 4, 10, 22, 23, 45, 51};
    int x = 4, n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n-1, x);
    std::cout << result << std::endl;
}