/*
    Napisz funkcję, która przyjmuje w argumencie liczbę całkowitą (bez znaku, mniejszą niż 65536)
    w postaci napisu. Funkcja ma dokonać konwersji tego napisu do liczby całkowitej i zwrócić jej wartość.
    Zademonstruj użycie tej funkcji w funkcji głównej.
    PRZYKŁAD:
    IN: "1234"
    OUT: 1234
*/

#include <iostream>

unsigned int f(unsigned char arr[]) {
    int result = 0;
    int counter = 0;
    while (arr[counter] != '\0') {
        result = result * 10 + (arr[counter] - '0');
        counter++;
    }
    return result;
}

int main() {
    unsigned char a[] = "1234";
    std::cout << f(a);
}