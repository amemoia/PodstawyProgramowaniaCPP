/*
    Napisz funkcję w języku C++, która przyjmuje jako argument wskaźnik na początek
    i koniec tablicy liczb całkowitych. Funkcja powinna wyświetlić wszystkie elementy tej tablicy.
    Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/

#include <iostream>

// pointer to array start address, end address
void print_arr(int *start, int *end) {
    for (int *i = start; *i < *end; ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

const int N = 10;

int main() {
    int arr[N] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    print_arr(arr, arr + N);
}
