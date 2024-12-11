/*
    Napisz program w języku C++, który stworzy tablicę dowolnych liczb całkowitych.
    Następnie program powinien przekopiować dane z tej tablicy do tablicy tymczasowej temp,
    przesunąć wszystkie elementy o 2 w lewo
    (Dwa pierwsze elementy powinny pojawić się na końcu tablicy)
    memcpy -> szybsze
    memmove -> wolniejsze, pewniejsze, sprawdza czy mozna bezpiecznie wpisac dane
    miedzy tablicami: memcpy
    wewnatrz tablicy: memmove
*/

#include <cstring>
#include <iostream>

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int main() {
    /*
        char a[10], b[10];
        memcpy ( a,     b,     10); poprawne
        memmove( a,     b,     10); poprawne
        memcpy ( &a[0], &a[1], 5 ); niepoprawne
        memcpy ( a,     a+1,   5 ); niepoprawne
        memmove( a,     a+1,   5 ); poprawne
    */
    const int n = 5;
    int a[n] = {}, b[n] = {1, 2, 3, 4, 5};
    printArr(a, n);
    printArr(b, n);
    memcpy(a, b, n*sizeof(int));
    printArr(a, n);
    printArr(b, n);
    int temp1 = a[0], temp2 = a[1];
    memmove(a, a+2, (n-2) * sizeof(int));
    a[n-2] = temp1, a[n-1] = temp2;
    printArr(a, n);
    printArr(b, n);
}