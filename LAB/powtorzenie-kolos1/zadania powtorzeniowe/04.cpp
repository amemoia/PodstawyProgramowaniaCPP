/*
    Napisz funkcję rekurencyjną, która zamienia liczbę binarną,
    reprezentowaną za pomocą napisu, na liczbę całkowitą. Zademonstruj jej użycie.
    PRZYKŁAD:
    IN: "10010011"
    OUT: 147
*/

#include <iostream>

unsigned int f(unsigned char arr[]) {
    int result = 0, counter = 0;
    while (arr[counter] != '\0' && (arr[counter] == '1' || arr[counter] == '0'))
    {
        result = result * 2 + (arr[counter] - '0');
        counter++;
    }
    return result;
}

int main() {
    unsigned char num[] = "10010011";
    std::cout << f(num);
}