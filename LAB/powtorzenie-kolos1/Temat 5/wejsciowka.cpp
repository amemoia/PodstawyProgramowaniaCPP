/*
    Zapisz funkcję w języku C++, która przyjmuje jako argument
    automatyczną tablicę wartości całkowitych oraz jej rozmiar.
    Funkcja powinna wypełnić tablicę wartościami pseudolosowymi z przedziału <20;40>.
*/
#include <ctime>
#include <iostream>
#include <cstdlib>

int randminmax(int min, int max) {
    return min + rand() % (max + 1 - min);
}

void f(int array[], int size) {
    for (int i = 0; i < size; i++)
    {
        array[i] = randminmax(20, 40);
    }
}

const int ARRSIZE = 10;
int main() {
    int arr[ARRSIZE] = {};
    f(arr, ARRSIZE);
    for (int i = 0; i < ARRSIZE; i++)
    {
        std::cout << arr[i] << " ";
    }
    
}