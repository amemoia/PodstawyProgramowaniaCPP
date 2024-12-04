/*
    Zmodyfikuj poprzedni program tak, aby skorzystać z funkcji inline.
*/

/*
Napisz funkcję w języku C++, która zwraca kwadrat liczby podanej w argumencie.
Skorzystaj z dyrektywy preprocesora #define.
*/

#include <iostream>

inline int SQUARE(int x) {return x*x;}

int main() {
    int x = 2;
    int y = SQUARE(x);
    std::cout << y;
}