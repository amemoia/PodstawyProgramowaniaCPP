/*
    Wykorzystując wskaźniki na funkcje napisz program w języku C++,
    który w zależności od wywołania funkcji f
    znajdzie w tablicy liczb całkowitych wartość minimalną lub maksymalną.
*/

#include <iostream>

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int f(int arr[], int n, int (*operation)(int, int)) {
    int ex = arr[0];
    for (int i = 0; i < n; i++) ex = operation(ex, arr[i]);
    return ex;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 15, 0, 12, 13, 5, 7};
    int n = sizeof(arr)/sizeof(*arr); // full size divided by one element = number of elements
    std::cout << f(arr, n, min) << std::endl;
    std::cout << f(arr, n, max) << std::endl;
}