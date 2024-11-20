/*
Napisz program w języku C++, który wczyta od użytkownika dwie wartości całkowite a i b. Program powinien obliczyć wynik następującego równania: sqrt(a / b^5), jeśli użytkownik wprowadził wartości mniejsze od zera należy zwrócić odpowiedni komunikat, a dla b = 0 wartość NAN.
*/

#include <cstdio>

int main() {
    char str[101] = {}; // +1 to account for ending character
    scanf("%100s", str);
    for(int i = 0; str[i]; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] += 'A' - 'a'; // ASCII table operations
        }
    }
}
