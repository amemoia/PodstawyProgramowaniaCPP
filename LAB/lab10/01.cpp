/*
    Napisz funkcję w języku C++, która przyjmie jako argumenty dwa napisy – przeszukiwany i poszukiwany.
    Jeżeli w napisie przeszukiwanym znajduje się napis będący zgodny z napisem poszukiwanym,
    funkcja powinna zwrócić wskaźnik na indeks pierwszego znaku odnalezionego pod-napisu.
    W przeciwnym razie funkcja powinna zwrócić nullptr.
    Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/

#include <iostream>

int strlen(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        ++i;
    }
    return i;
}

char* substr(char str[], char sub[]) {
    int strSize = strlen(str);
    int subSize = strlen(sub);
    char *first_substring_char = nullptr;
    for (int i = 0; i < strSize; i++) {
        if (str[i] == sub[0]) {
            int checkCounter = 1;
            for (int j = 1; j < subSize; j++)
            {
                if (str[i+j] == sub[j])
                {
                    ++checkCounter;
                }
                if (checkCounter == subSize) {
                    return &(str[i]);
                }
            }
        }        
    }
    return first_substring_char;
}

int substr_index(char str[], char sub[]) {
    int strSize = strlen(str);
    int subSize = strlen(sub);
    char first_substring_char_index = -1;
    for (int i = 0; i < strSize; i++) {
        if (str[i] == sub[0]) {
            int checkCounter = 1;
            for (int j = 1; j < subSize; j++)
            {
                if (str[i+j] == sub[j])
                {
                    ++checkCounter;
                }
                if (checkCounter == subSize) {
                    return i;
                }
            }
        }        
    }
    return first_substring_char_index;
}

int main() {
    char str[] = "Ala ma kota";
    char sub[] = "ma";
    // Expected output: pointer to "m" (4th element)
    // weirdge string moment: cout will display from the pointer to \0
    std::cout << substr(str, sub);
}