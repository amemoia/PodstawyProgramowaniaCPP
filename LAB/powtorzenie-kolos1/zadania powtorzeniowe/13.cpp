/*
    Napisz funkcję, która w parametrze przyjmuje tablicę liczb całkowitych.
    Funkcja powinna zwrócić element o największej liczbie bitów o wartości 1, 
    jeśli w tablicy jest więcej liczb o takiej samej ilości bitów,
    funkcja powinna zwrócić tę, która wystąpiła w tablicy, jako ostatnia.
    Zilustruj działanie tej funkcji i wyświetli wynik zwrócony przez funkcję.
    PRZYKŁAD:
    IN: {1, 2, 3, 4, 5, 64}
    OUT: 5
*/

#include <iostream>

int countSetBits(unsigned int number) {
    int counter = 0;
    for (int i = 0; i < __INT_WIDTH__; i++)
    {
        if (number & (1 << i)) counter++;
    }
    return counter;
}

unsigned int mostSetBitsInArr(unsigned int arr[], int arrlen) {
    unsigned int mostSetBitsElement = 0;
    unsigned int mostSetBitsCount = 0;
    for (int i = 0; i < arrlen; i++)
    {
        unsigned int bitCount = countSetBits(arr[i]);
        if (bitCount >= mostSetBitsCount) {
            mostSetBitsCount = bitCount;
            mostSetBitsElement = arr[i];
        }
    }
    return mostSetBitsElement;
}

int main() {
    unsigned int numbers[] = {1, 2, 3, 4, 5, 64};
    // expected output: 5
    std::cout << mostSetBitsInArr(numbers, 6);
}