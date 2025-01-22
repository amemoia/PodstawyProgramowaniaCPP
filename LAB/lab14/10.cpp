/*
Napisz program w języku C++, który odczyta i wyświetli dane z pliku o następującej strukturze:

Ala ma X kotow w nastepujacym wieku:
DATA

gdzie X to ilość kotów w tablicy DATA.
DATA to wartości kolejnych elementów tablicy zapisane binarnie.
Każdy element tablicy DATA jest reprezentowany za pomocą liczby całkowitej.
Program powinien wyświetlić wiek wszystkich kotów.
*/

#include <cstdio>

void readCatsData(const char *filename) {
    int age = 0, numCats = 0;

    FILE *file = nullptr;
    if ( (file = fopen(filename, "r")) ) {
        fscanf(file, "Ala ma %d kotow nastepujacym wieku:\n", &numCats);
        for (int i = 0; i < numCats; i++)
        {
            fread(&age, sizeof(age), numCats, file);
            printf("Kot %d: %d lat\n", i+1, age);
        }
    } else {
        perror("File open error");
        return;
    }
}

int main() {
    const char *filename = "koty.txt";
    readCatsData(filename);
}