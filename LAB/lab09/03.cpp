/*
    Napisz program w języku C++, który wczyta od użytkownika nieujemną liczbę całkowitą n,
    a następnie dynamicznie zaalokuje pamięć dla n elementowej tablicy liczb rzeczywistych.
    Program powinien wypełnić tablicę zerami, a następnie wyświetlić wszystkie elementy tej tablicy.
    Na koniec program powinien zmienić rozmiar tablicy na 10 i wypełnić ją jedynkami.
*/
#include <iostream>

int main() {
    unsigned int n;
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int newsize = 10;
    int *temp = new int[newsize];
    for (int i = 0; i < newsize; ++i) {
        temp[i] = 1;
    }
    arr = temp;
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    delete[] temp;
    arr = nullptr, temp = nullptr;
}
