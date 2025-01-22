/*
1. Napisz program w języku C++, który wczyta z pliku tekstowego wszystkie słowa do tablicy napisów.
Zakładamy, że słowa w pliku tekstowym nie są dłuższe niż 99 znaków.
*/

#include <cstdio>
#include <iostream>
#include <cstring>

void printWordsFromFile(const char *filename) {
    char tempStr[100] = {};
    char** tempWords;
    int count = 0;

    FILE *in = nullptr;
    if ( (in = fopen(filename, "rt")) == nullptr ) {
        std::cout << "File Open Error" << std::endl;
        return;
    } else {
        while ( fscanf(in, "%99s", tempStr) != EOF ) count++;
        tempWords = new char* [count];

        rewind(in);

        int i = 0;
        while ( fscanf(in, "%99s", tempStr) != EOF ) {
            tempWords[i] = new char[100];
            strcpy(tempWords[i], tempStr);
            i++;
        }
        fclose(in);
        for (int j = 0; j < count; j++)
        {
            printf("%s ", tempWords[j]);
        }
        for (int i = 0; i < count; i++) delete[] tempWords[i];
        delete[] tempWords;
    }
}


int main() {
    printWordsFromFile("result.bin");
}