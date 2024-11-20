/*
    Napisz funkcję w języku C++,
    która przyjmie jako argumenty automatyczną tablicę wartości całkowitych,
    jej rozmiar oraz poszukiwaną wartość.
    Funkcja powinna zwrócić wskaźnik na pierwszą komórkę tablicy,
    w której znajdzie tą wartość.
    Jeżeli nie ma takiej liczby w tablicy, należy zwrócić wskaźnik na NULL.
*/

#include <iostream>

int *f(int arr[], int arrsize, int value) {
    for (int i = 0; i < arrsize; ++i) {
        if (*(arr+i)== value) {
            return arr + i;
        }
    }
    return nullptr;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int arrsize = numbers[0] - numbers[4];
    int *result = f(numbers, 5, 5);
    result ? std::cout << "Value: " << *result << " Index: " << result - numbers << std::endl : std::cout << "nullptr" << std::endl;
}
