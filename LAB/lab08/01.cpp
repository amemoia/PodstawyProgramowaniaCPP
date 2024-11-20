// pp-8 abc123!?;
// wskaźnik: zmienna zawierajaca liczbe reprezentujaca adres pamieci
// * : operator definiujacy wskaznik
// !!! char *a, b, c : tylko *a jest wskaźnikiem
// char *ptr = &a; DEKLARACJA WSKAZNIKA *ptr, REFERENCJA &A
// *ptr = 10; ZMIENIA WARTOSC ZMIENNEJ (DEREFERENCJA)
// ptr = 10; ZMIENIA ADRES WSKAZNIKA
// wazne: inicjalizowac wskazniki
// char *ptr = 0; = NULL; = nullptr;
// jesli juz nie potrzebny to ustawiamy znowu na 0;

#include <iostream>
#include <cstdio>

int main() {
    int a = 10;
    int *ptr = &a;
    std::cout << a << std::endl;
    *ptr = 5;
    std::cout << a << std::endl;
    a = 15;
    std::cout << *ptr << std::endl;
    a = 10;
    printf("%x %x %x\n", &a, ptr, &ptr);
    printf("%d %d %d \n", a, *ptr, ptr);

    return 0;
}
