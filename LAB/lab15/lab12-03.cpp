/*
Napisz program w języku C++, który wczyta od użytkownika liczbę, jako napis.
Liczba powinna mieć co najwyżej 10 znaków.
Następnie program powinien zwiększyć tą liczbę o 0.123 i ją wyświetlić.
*/

#include <cstdlib>
#include <iostream>

int main() {
    char number[11] = "1212";
    char *p;
    int num = strtod(number, &p);
    if(p > number) 
        std::cout << num + 0.123f << "\n";
    else 
        std::cout << " Konwersja się nie udała.\n";
    return 0;
}