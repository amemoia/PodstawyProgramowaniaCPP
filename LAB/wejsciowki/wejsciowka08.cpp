/*
    Napisz program w języku C++, który stworzy 10-cio elementową tablicę liczb całkowitych
    i wypełni ją dowolnymi wartościami. Na koniec wyświetl tą tablicę.
    Użyj dynamicznej alokacji pamięci.
*/
#include <iostream>

int main() {
    int* arr;
    arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 123;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
}