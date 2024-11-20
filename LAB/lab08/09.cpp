/*
    Napisz funkcję w języku C++, która dostaje dwa argumenty:
    wskaźnik na stałą typu int i stały wskaźnik na zmienną typu int.
    Funkcja powinna przepisać zawartość stałej wskazywanej przez pierwszy argument
    do zmiennej wskazywanej przez drugi argument.
    Napisz program, który przetestuje działanie tej funkcji.
*/

int main() {
    // wskaznik do stałej (typ interpretacji const int, wskaznik nie jest staly)
    const int a = 10;
    const int *ptr = &a;
    // wskaznik staly (typ samego wskaznika staly, interpretacja int)
    int b = 20;
    int * const ptr_const = &b;
    // staly wskaznik na stala
    const int c = 30;
    int const * const ptr_const_to_const = &c;
    return 0;
}
