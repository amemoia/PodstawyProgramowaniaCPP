/*
    Napisz funkcję w języku C++, która przyjmuje napis.
    Niech funkcja zwróci liczbę słów w tym napisie.
    MOD: Liczymy coś jako słowo jeśli pierwsza litera jest duza a druga jest cyfra
*/

#include <iostream>

int strlen(char str[]) {
    int counter = 0;
    while (str[counter] != '\0') counter++;
    return counter;
}

int f(char str[]) {
    int size = strlen(str);
    int wordcount = 0;
    char letters_min = 'A', letters_max = 'Z', numbers_min = '0', numbers_max = '9', whitespace = ' ';
    for (size_t i = 0; i < size; i++)
    {
        if (i == 0 and str[0] != whitespace)
        {
            if (    str[i]   >= letters_min and str[i]   <= letters_max
                and str[i+1] >= numbers_min and str[i+1] <= numbers_max )
                wordcount++;
        }
        else
        {
            if (    str[i-1] == whitespace
                and str[i]   >= letters_min and str[i]   <= letters_max
                and str[i+1] >= numbers_min and str[i+1] <= numbers_max )
                wordcount++;
        }
    }
    return wordcount;
}

int main() {
    char str[] = "A1a m4 N0weg0 Kota";
    std::cout << f(str);
}