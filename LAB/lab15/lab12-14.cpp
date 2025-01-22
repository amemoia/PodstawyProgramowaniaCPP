/*
Napisz program w języku C++, który podzieli podany string na tokeny (fragmenty napisu)
rozdzielone podanym znakiem. Zbierz wszystkie tokeny do tablicy string-ów
i następnie wyświetl je na ekranie. Do wykonania zadania można użyć funkcji strtok() z pliku <cstring>.

PRZYKŁAD:
char str[] = "ala;ma kota;i;dwa psy"
char delimeter = ';'
tokeny: "ala", "ma kota", "i", "dwa psy"
*/

#include <cstring>
#include <iostream>

int main() {
    char str[] = "ala;ma kota;i;dwa psy";
    char delimeter = ';';
    char* tokens[100] = {};
    int i_tokens = 0;
    char* token = strtok(str, &delimeter);
    while (token != nullptr) {
        tokens[i_tokens] = token;
        i_tokens++;
        token = strtok(str, &delimeter);
    }
    for (int i = 0; i < i_tokens; ++i) std::cout << tokens[i] << "\n";
//tokeny: "ala", "ma kota", "i", "dwa psy"
}