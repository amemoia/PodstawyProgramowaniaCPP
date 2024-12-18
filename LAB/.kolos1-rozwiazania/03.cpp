/*
    slowo na sylaby
*/
#include <iostream>
char VOWELS[] = "aeiyou";

bool is_vowel(char c) {
    for (int i = 0; VOWELS[i]; i++) if (c == VOWELS[i]) return true;
    return false;
}

void word2syllables(const char str[]) {
    int counter = 0;
    int syllables = 0;
    int i = 0;
    for (i = 0; str[i]; i++) if (is_vowel(str[i])) counter++;
    for (i = 0; str[i] && syllables < counter - 1; i++)
    {
        std::cout << str[i];
        if (is_vowel(str[i])) std::cout << " ", syllables++;
    }
    for (; str[i]; i++) std::cout << str[i];
    std::cout << std::endl;
}

int main() {
    word2syllables("kolokwium");
}