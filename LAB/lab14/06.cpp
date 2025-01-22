/*
Napisz funkcję w języku C++, która przyjmuje ścieżkę do pliku tekstowego.
W pliku tekstowym znajdują się liczby całkowite oddzielone pojedynczymi spacjami.
Funkcja powinna wczytać te liczby zwiększyć o jeden i ponownie zapisać do pliku.
Do obsługi plików użyj strumieni.
*/

#include <cstdio>

void incrementNumbersInFile(const char* filename) {
    int *numbers = nullptr, count = 0, tmp;
    FILE *in = nullptr, *out = nullptr;
    if ( (in = fopen(filename, "r")) != nullptr) {
        while( fscanf(in, "%d ", &tmp) != EOF) count++;
        rewind(in);
        numbers = new int[count];
        int i = 0;
        while( fscanf(in, "%d ", &tmp) != EOF) numbers[i++] = tmp + 1;
        fclose(in);
    } else {
        perror("File open error");
        return;
    }

    if ( (out = fopen(filename, "wt")) != nullptr) {
        for (int i = 0; i < count; i++) fprintf(out, "%d ", numbers[i]);
        fclose(out);
        delete[] numbers;
    } else {
        perror("File open error");
        delete[] numbers;
        return;
    }

}

int main() {
    const char *filePath = "liczby.txt";
    incrementNumbersInFile(filePath);
}