/*
Zaprojektuj strukturę Car, która posiada dwa pola:
register_number, będący jednobajtową liczbą całkowitą bez znaku (0 - 255),
brand_name, będąca maksymalnie 15 znakowym napisem.

Następnie napisz funkcję w języku C++, która przyjmuje tablicę zmiennych typu Car,
jej rozmiar oraz stały napis będący nazwą pliku, do którego funkcja powinna zapisać przekazaną tablicę.
*/

#include <cstdio>

struct Car
{
    unsigned char register_number;
    char brand_name[16];
};

void writeCarsToFile(Car array[], int num, const char* filename) {
    FILE *file = nullptr;
    if ( (file = fopen(filename, "wb")) != nullptr ) {
        for (int i = 0; i < num; i++)
        {
            //fwrite(&array[i].register_number, sizeof(unsigned char), 1, file);
            //fwrite(&array[i].brand_name, sizeof(char) * 16, 1, file);
            fwrite(array, sizeof(Car), num, file);
            fclose(file);
        }
        
    } else {
        perror("File open error");
    }
}

int main() {
    Car arr[5] = {
        1, "Volvo",
        2, "Opel",
        3, "BMW",
        4, "Tesla",
        5, "Fiat"
    };

    writeCarsToFile(arr, 5, "cars.bin");
}