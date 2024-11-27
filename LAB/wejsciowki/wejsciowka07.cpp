/*
    Napisz funkcję w języku C++, która przyjmuje następujące argumenty:
    wskaźnik na początek tablicy liczb całkowitych – begin,
    wskaźnik na koniec tablicy liczb całkowitych – end
    oraz referencję na zmienną typu logicznego.
    Funkcja powinna sprawdzić, czy w tablicy znajduje się wartość 5 i za pomocą ostatniego argumentu zwrócić odpowiedź.
    Napisz program w języku C++, który sprawdzi działanie tej funkcji.
*/

#include <iostream>

void f(int *begin, int *end, bool &check) {
    check = false;
    for (int *i = begin; i <= end; ++i) {
        if (*i == 5) {
            check=true;
            break;
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 3, 6};
    int *begin = &arr[0];
    int *end = &arr[4];
    bool check = false;
    f(begin, end, check);
    std::cout << check << std::endl;
    return 0;
}
