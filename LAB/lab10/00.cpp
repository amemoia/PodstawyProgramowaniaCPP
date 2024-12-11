/*
    conv-nets : qwer1234
*/

/*
    13 z powtorzenia
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

int f(int arr[], int arrsize) {
    int largest_i = 0;
    int largest_i_count = 0;
    for (int i = 0; i < arrsize ; i++)
    {
        int bitcounter = 0;
        // check every bit through bitshift,
        // j is which bit we are checking
        // sizeof returns in bytes so we multiply by 8
        for (int j = 0; j < sizeof(arr[i]) * 8; j++) {
            if (arr[i] & (1 << j)) ++bitcounter;
        }
        if (bitcounter >= largest_i_count) {
            largest_i = i;
            largest_i_count = bitcounter;
        }
    }
    return arr[largest_i];
}
int main() {
    int array[] = {1, 2, 3, 4, 5, 64};
    std::cout << f(array, 6);
}