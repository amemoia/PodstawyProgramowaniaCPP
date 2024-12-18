/*
    zadanie z bin2dec(), correct()
    operacje binarne: inwersja trzeciego bita, zamiana 4 pierwszy z 4 ostatnimi
*/

#include <cstdio>

unsigned char bin2dec(char str[]) {
    unsigned int num = 0;
    for (int i = 0; str[i] != 0; i++) num = (num << 1) | (str[i] - '0');
    return num;
}

unsigned char correct(unsigned char number) {
    number ^= 8;
    number  = (number >> 4) | (number << 4);
    return number;
}

int main() {
    char number[9] = {};
    scanf("%8s", number);
    printf("%d\n", correct(bin2dec(number)));
}