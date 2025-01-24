/*
Napisz program w języku C++, który stworzy dynamiczną tablicę dwuwymiarową trójkątną arr
o rozmiarze NxN wybranego typu liczbowego i wypełni ją dowolnymi wartościami.
Zdefiniuj funkcję, która w parametrze przyjmie wskaźnik na wskaźnik na typ void (do tablicy trójkątnej arr),
rozmiar N, wielkość w bajtach pojedynczego elementu sizen tablicy przekazanej
w pierwszym parametrze oraz dwie współrzędne x, y typu całkowitego.
Funkcja ma zwrócić wskaźnik typu void ustawiony na podany we współrzędnych x, y element tablicy
lub nullptr jeżeli nie ma takiego elementu.
Pokaż użycie tej funkcji i wykonaj dealokację tablicy arr.

IN:
 0   1  2  3  4 
 5   6  7  8     
 9  10 11        
12 13            
14               
OUT: 7 (for x=2, y=1)
*/
#include <iostream>

void* f( void* ptr, const int N, const int sizen, int x, int y) {
    void* element_ptr = nullptr;
    if (x >= 0 && y >= 0 && y < N && x < N - y) {
        int toSubtract = 0;
        if (y > 1) toSubtract = 1;
        if (y > 2) {
            for (int i = 0; i < y-2; i++)
            {
                toSubtract += 2 + i;
            }
        }
        
        int element_index = y*N + x - toSubtract;
        element_ptr = (char*)ptr + element_index * sizen;
    }
    return element_ptr;
}

int main() {
    const int N = 5;
    int arr_len = 0;
    for (int i = 0; i < N; i++)
    {
        arr_len += N - i;
    }
    int *arr = new int[arr_len];
    for (int i = 0; i < arr_len; i++)
    {
        arr[i] = i;
    }
    void* result = f(arr, N, sizeof(arr[0]), 0, 4);
    if (result == nullptr) std::cout << "nullptr";
    else std::cout << *( (int*)(result) );
}