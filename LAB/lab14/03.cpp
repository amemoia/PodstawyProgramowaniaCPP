/*
3. Napisz program w języku C++, który zapisze do pliku 10 dowolnych liczb całkowitych.
Do obsługi błędów użyj funkcji perror.
*/

#include <cstdio>

void intToFile(int numbers[], const char* filename) {
    FILE *out = nullptr;
    if ( (out = fopen(filename, "wt")) != nullptr ) {
        for (int i = 0; i < 10; i++) numbers[i] = fprintf(out, "%d ", numbers[i]);
        //fwrite(numbers, sizeof(int), 10, out);
        fclose(out);
    } else {
        perror("File Open Error");
    }
}

int main() {
    int numbers[10] = {2, 4, 6, 8, 10, 12, 14, 16, 0b10101010, 12345};
    intToFile(numbers, "writenum.txt");
}