/*
    Zdefiniuj funkcję, która przyjmuje jako argumenty:
    napis str oraz automatyczną tablicę liczb całkowitych bez znaku occ
    o długości równej ilości znaków w napisie str.
    Funkcja powinna w i-ty element tablicy occ
    wpisać liczbę wystąpień (w całym napisie str) i-tego znaku z tego napisu.
    Napis str może zawierać jedynie małe i wielkie litery oraz spacje.
    Małe i wielkie litery zliczamy łącznie, jako ten sam znak.
    PRZYKŁAD:
    IN str = “Ala ma kota”
    OUT occ = [4, 1, 4, 2, 1, 4, 2, 1, 1, 1, 4]
*/

#include <iostream>

char str[] = "Ala ma kota";
const int OCC_LEN = 11;

int strlen(char str[]) {
    int counter = 0;
    while (str[counter] != '\0') counter++;
    return counter;
}

int countInStr(char character, char str[]) {
    int charUpperValue = character ^ 32; // konwersja na duzy znak poprzez XOR z 32
    int charLowerValue = character;
    int str_len = strlen(str);
    int counter = 0;
    for (int i = 0; i < str_len; i++)
    {
        if (   (str[i] == charLowerValue)
            or (str[i] == charUpperValue) ) counter++;
    }
    return counter;
}

void printocc(unsigned int str[], int len) {
    for (int i = 0; i < len; i++)
    {
        std::cout << str[i] << " ";
    }
    std::cout << std::endl;
}

void f(char str[], unsigned int occ[]) {
    int str_len = strlen(str);
    if (OCC_LEN != str_len) std::cout << "bledna dlugosc occ";
    for (int i = 0; i < str_len; i++)
    {
        occ[i] = countInStr(str[i], str);
    }
}

int main() {
    unsigned int occ[OCC_LEN] = {};
    f(str, occ);
    printocc(occ, OCC_LEN);
}