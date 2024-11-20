/*
    Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą oraz zmienną bool przez referencję.
    Funkcja powinna sprawdzić, za pomocą operacji bitowych, czy cyfry przekazanej liczby całkowitej są parzyste.
    Ponadto funkcja powinna ustawić przekazaną zmienną typu bool na wartość true,
    jeśli wszystkie cyfry są parzyste i false w przeciwnym wypadku.
*/

#include <iostream>

void f(int number, bool *check) {
    while (number) {
        if ((number % 10) & 1) {
            *check = false;
            return;
        }
        number /= 10;
    }
    *check = true;
}

int main() {
    bool check = false;
    f(21222, &check);
    std::cout << (check ? "true" : "false") << std::endl;
}
