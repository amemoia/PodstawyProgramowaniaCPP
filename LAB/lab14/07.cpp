/*
Napisz funkcję w języku C++, która przyjmuje ścieżkę do pliku tekstowego.
W pliku tekstowym znajdują się posortowane rosnąco liczby całkowite oddzielone pojedynczymi spacjami.
Funkcja powinna wstawić dodatkowe 5 losowych liczb z przedziału domkniętego,
gdzie min to minimalna wartość w pliku, zaś max maksymalna.
Wstawiane liczby nie powinny zachwiać kolejności liczb całkowitych w pliku.
Tym samym nowe liczby powinny być wprowadzone w odpowiednie miejsce tak,
aby wszystkie liczby w pliku dalej były posortowane rosnąco.
*/

#include <cstdio>
#include <cstdlib>
#include <ctime>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void insertRandToSortedFile(const char *filename) {
    int *numbers, count = 0, tmp;
    FILE *in = nullptr, *out = nullptr;
    if( (in = fopen(filename, "r")) ) {
        while ( fscanf(in, "%d", &tmp) == 1) ++count;
        rewind(in);
        numbers = new int[count + 5];
        int i = 0;
        while ( fscanf(in, "%d", &tmp) == 1) numbers[i++] = tmp;
        fclose(in);
        
    } else {
        perror("File open error");
        return;
    }

    int min = numbers[0], max = numbers[count - 1];
    for (int i = 0; i < 5; i++)
    {
        numbers[count++] = min + rand() % (max - min + 1);
    }
    qsort(numbers, count, sizeof(numbers[0]), compare);

    if( (out = fopen(filename, "w")) ) {
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
    srand(time(0));
    const char *filePath = "liczby.txt";
    insertRandToSortedFile(filePath);
}