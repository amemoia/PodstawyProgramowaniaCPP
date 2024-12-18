/*
    Napisz program w języku C++, który wczyta od użytkownika dwie liczby zmiennoprzecinkowe a i b,
    a następnie nieujemną liczbę całkowitą o.
    Program, w zależności od podanej nieujemnej liczby całkowitej,
    powinien wyświetlić wynik odpowiedniego działania:

    0 – dodawanie,
    1 – odejmowanie,
    2 – mnożenie,
    3 – dzielenie.

    Do rozwiązania zadania wykorzystaj wskaźniki na funkcje.
*/

#include <iostream>

float add(float a, float b) {return a+b;}
float sub(float a, float b) {return a-b;}
float mul(float a, float b) {return a*b;}
float div(float a, float b) {return a/b;}

float (*func_ptr[4])(float, float) = {add, sub, mul, div};

int main() {
    unsigned int o;
    float a, b;
    std::cin >> a >> b >> o;
    std::cout << func_ptr[o](a, b) << std::endl;
}