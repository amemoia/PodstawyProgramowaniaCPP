/*
    Napisz program w języku C++, który posortuje tablicę dowolnych liczb rzeczywistych arr1 malejąco
    oraz tablicę dowolnych liczb całkowitych arr2 rosnąco.
    Do sortowania wykorzystaj algorytm Quick Sort z pliku nagłówkowego cstdlib.
    qsort()
*/
#include <cstdlib>
#include <iostream>

int desc (const void *a, const void *b) { return *(float*)b - *(float*)a; }
int  asc (const void *a, const void *b) { return *(float*)a - *(float*)b; }

int main() {
    float arr1[10] = {2, 5, 7, 3, 4, 9, 0, 15, 12, 13};
    float arr2[10] = {1, 13, 12, 15, 9, 4, 5, 2, 10, 7};
    qsort(arr1, 10, sizeof(float), desc);
    qsort(arr2, 10, sizeof(float), asc);
    for (int i = 0; i < 10; i++) printf("%4.1f ", arr1[i]);
    std::cout << std::endl;
    for (int i = 0; i < 10; i++) printf("%4.1f ", arr2[i]);
    std::cout << std::endl;
}