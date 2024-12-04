/*
    Napisz program, który wczytuje od użytkownika 2 liczby całkowite r oraz h,
    które są odpowiednio promieniem koła oraz wysokością stożka zbudowanego na tym kole.
    Program ma wypisać na standardowym wyjściu objętość bryły.
    Jeżeli r lub h są mniejsze lub równe 0 wyświetl na standardowym wyjściu komunikat “Bledne dane”.
    (objętość stożka V=PI r^2 h / 3)
*/

#include <iostream>
#include <cmath>

float squared(float x) {return x*x;}

int main() {
    int r, h;
    std::cin >> r;
    std::cin >> h;
    if (r <= 0 || h <= 0) {
        std::cout << "Bledne dane" << std::endl;
    }
    else {
        float v = M_PI * squared(r) * h / 3.f;
        std::cout << v << std::endl;
    }
}