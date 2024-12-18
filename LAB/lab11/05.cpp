/*
    Napisz program w języku C++, który posortuje malejąco tablicę napisów za pomocą funkcji qsort.
*/

#include <iostream>
#include <cstdlib>
#include <cstring>

int desc (const void* a, const void* b) {
    // returns positive if b < a, returns 0 if equal and otherwise returns negative
    return strcmp( *(const char**)b, *(const char**)a );
}

int main() {
    const char* str[] = {"Ala", "ma", "Kota"};
    qsort(str, 3, sizeof(const char*), desc);
    for (int i = 0; i < 3; i++) std::cout << str[i] << " ";
    std::cout << std::endl;
}