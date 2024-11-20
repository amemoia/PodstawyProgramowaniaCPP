#include <iostream>

/*
    conv: AlaMaRybke
    Napisz funkcję w języku C++, która przyjmuje jako argumenty napis będący liczbą binarną, liczbę całkowitą bez znaku.
    W rezultacie funkcja powinna zwrócić sumę liczb całkowitych podanych w pierwszym i drugim argumencie.
    Zaimplementuj odpowiednie funkcję oraz program, który przetestuje ich działanie.
*/

float pow(float x, int n) {
    float result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= x;
    }
    return result;
}

const int arrSize = 16 + 1;

unsigned int countEndZero(char bin[]) {
    int i = 0;
    while(bin[arrSize-i] != '0') ++i;
    return i;
}

unsigned int binaryToInt(char bin[]) {
    unsigned int binaryConvertedToInt = 0;
    int endingZeroes = countEndZero(bin);
    for (int i = 0; i < arrSize - endingZeroes; ++i) {
        unsigned int convertedBit = bin[arrSize-i-endingZeroes] - '0';
        binaryConvertedToInt += convertedBit * pow(2, i);
    }
    return binaryConvertedToInt;
}

int main() {
    std::cout << "Wpisz liczbe binarna: " << std::endl;
    char bin[arrSize] = {};
    std::cin >> bin;
    std::cout << "Wpisz liczbe calkowita: " << std::endl;
    int x;
    std::cin >> x;
    std::cout << x + binaryToInt(bin);
}
