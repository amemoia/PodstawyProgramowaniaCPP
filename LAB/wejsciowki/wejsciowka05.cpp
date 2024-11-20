#include <cstdlib>
#include <iostream>
#include <cmath>

/*
    Napisz funkcję w języku C++, która przyjmie jako argumenty automatyczną tablicę wartości całkowitych oraz jej rozmiar. Funkcja powinna zwracać wartość z tej tablicy, która jest najbliższa średniej arytmetycznej wszystkich wartości z tej tablicy. Wynik funkcji zwróć za pomocą argumentu przekazanego do funkcji np. result. Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/

int closestToAvg(int values[], int dictSize) {
    double avg;
    double smallestDiff = -1;
    int closestElement = values[0];
    for (int element; element < dictSize; ++element) {
        avg += values[element];
    }
    avg = avg / dictSize;
    for (int element; element < dictSize; ++element) {
        double currentDiff = abs(values[element] - avg);
        // diff nie bedzie < 0 poniewaz abs()
        if (smallestDiff < 0 || smallestDiff > currentDiff) {
            smallestDiff = currentDiff;
            closestElement = values[element];
        }
    }
    return closestElement;
}

int main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dictSize = sizeof(values) / sizeof(values[0]);
    int result = closestToAvg(values, dictSize);
    std::cout << result << std::endl;
}
