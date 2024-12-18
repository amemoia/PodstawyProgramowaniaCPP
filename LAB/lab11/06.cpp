/*
    Napisz program w języku C++, który wczyta od użytkownika liczbę, jako napis.
    Liczba powinna mieć co najwyżej 10 cyfr.
    Następnie program powinien zwiększyć tą liczbę o 10 i ją wyświetlić.
*/

#include <cstdio>
#include <cstdlib>

int main() {
    char str[11] = {};
    char *end = &(str[10]);
    scanf("%10s", str);
    printf("%ld\n", strtol(str, &end, 10));
}