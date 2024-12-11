/*
    Napisz program, który pobiera od użytkownika dwie liczby całkowite dodatnie n i m.
    Następnie program ma generować i wyświetlać na ekranie pseudolosowe zdanie,
    które ma być zbudowane z n słów a każde słowo ma być zbudowane z co najwyżej m znaków.
    W słowach mają się pojawiać, z równym prawdopodobieństwem, małe i duże litery.
    PRZYKŁAD:
    IN: 8 5
    OUT: jtETN jxpd G DDYmP NYtT HubNe IAByV jmN
*/
#include <iostream>
#include <ctime>

int randMinMax(int min, int max) {
    return rand() % (max - min + 1) + min;
}

void generateRandWords(int wordcount, int maxlen) {
    for (int i = 0; i < wordcount; i++)
    {
        int currentWordLen = randMinMax(1, maxlen);
        for (int j = 0; j < currentWordLen; j++)
        {
            int isUppercase = randMinMax(0, 1);
            char letter = randMinMax('a', 'z');
            if (isUppercase) letter ^= 32; // toggle case
            std::cout << letter;
        }
        std::cout << " ";
    }
    
}

int main() {
    int n, m;
    std::cin >> n;
    std::cin >> m;
    generateRandWords(n, m);
}