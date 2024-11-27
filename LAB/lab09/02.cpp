/*
    Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą n,
    a następnie dynamicznie zaalokuje pamięć dla n elementowej tablicy liczb całkowitych.
    Program powinien wypełnić tablicę dowolnymi wartościami,
    a następnie wyświetlić wszystkie elementy tej tablicy.
*/
#include <cstdlib>
#include <iostream>

int minmaxrand(int min, int max) {
    return min + rand() % (max-min+1);
}

int main() {
    srand(time(NULL));
    int n;
    std::cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; ++i) {
        array[i] = minmaxrand(0, 9);
    }
    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    delete[] array;
    return 0;
}
