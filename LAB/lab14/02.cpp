/*
Napisz funkcję w języku C++, która przyjmuje ścieżkę do pliku tekstowego.
W pliku tekstowym znajdują się posortowane rosnąco liczby całkowite oddzielone pojedynczymi spacjami.
Funkcja powinna wczytać te liczby do tablicy i znaleźć w nich wartość minimalną i maksymalną.
*/

#include <cstdio>

void minMaxFromFile(const char* filename) {
    int len = 0, *arr = nullptr, tmp;
    FILE *numbers = nullptr;
    if ( (numbers = fopen(filename, "rt")) != nullptr ) {
        while ( fscanf(numbers, "%d ", &tmp) != EOF ) len++;
        arr = new int[len];
        rewind(numbers);
        int i = 0;
        while ( fscanf(numbers, "%d ", &tmp) != EOF ) arr[i++] = tmp;
        printf("Min: %d    Max: %d \n", arr[0], arr[len - 1]);
        fclose(numbers);
        delete[] arr;
    } else {
        perror("File Open Error");
    }
}

int main() {
    minMaxFromFile("numbers.txt");
}