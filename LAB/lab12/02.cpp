/*
    Napisz funkcję w języku C++, która przyjmuje następujące argumenty:
    wskaźnik na tablicę liczb całkowitych – arr,
    liczbę całkowitą będącą rozmiarem tej tablicy – n,
    liczbę całkowitą – k
    oraz wskaźnik na tablicę liczb całkowitych – result.
    Funkcja powinna wprowadzić do tablicy result
    k największych elementów z nieposortowanej tablicy arr przekazanej w argumencie.
    Funkcja nie powinna modyfikować oryginalnej tablicy.
    Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/

#include <algorithm>
#include <cstring>
#include <iostream>

bool compare(int &a, int &b) {
    return a > b;
}

void f(int *arr, int n, int k, int *result) {
    int *temp = new int[n];
    memcpy(temp, arr, n*sizeof(arr[0]));
    std::sort(temp, temp + n, compare);
    memcpy(result, temp, k*sizeof(temp[0]));
    delete[] temp;
}

int main() {
    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int n = sizeof(nums) - sizeof(nums[0]);
    int k = 3;
    int *result = new int[k];
    for (int i = 0; i < k; i++)
    {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    
    delete[] result;
}