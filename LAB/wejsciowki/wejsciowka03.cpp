#include <iostream>
#include <cstdio>

int main() {
    /*
        Napisz program w języku C++, który przyjmuje jedno bajtową liczbę całkowitą
        oraz jedno bajtową liczbę całkowitą bez znaku.
        Program powinien wyświetlić wartość wczytanych zmiennych jako liczby całkowite.
    */
    char x;
    unsigned char y;
    std::cout << "Wpisz (signed) char x: " << std::endl;
    scanf("%c", &x);
    std::cout << "Wpisz (unsigned) char y: " << std::endl;
    scanf("%hhu", &y);
    std::cout << "Wartość x: " << (int)(x - '0') << std::endl;
    std::cout << "Wartość y: " << (int)y << std::endl;
}
