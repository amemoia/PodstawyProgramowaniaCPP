#include <iostream>
#include <cstdio>

// Napisz program w języku C++, który pobierze ze standardowego wejścia zmiennoprzecinkowe długości podstaw i wysokość trapezu,
// a następnie wyświetli na standardowym wyjściu jego pole w notacji naukowej.
int main()
{
    // ((a+b)*h)/2
    float a, b, h;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "h: ";
    std::cin >> h;
    float p = ((a+b)*h)/2.f;
    printf("Wynik w notacji naukowej: %e", p);
    return 0;
}
