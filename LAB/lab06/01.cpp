/*
conv: AlaMaRybke!
Napisz funkcję w języku C++, która przyjmie jako argument dwuwymiarową tablicę liczb zmiennoprzecinkowych oraz jej wymiary.
Funkcja powinna tak zmodyfikować tą tablicę, aby w każdym polu znalazła się średnia arytmetyczna wartości w nim samym oraz polach sąsiednich: górnym, dolnym, lewym i prawym. Jeżeli pole znajduje się na krawędzi tablicy, należy policzyć średnią z mniejszej liczby sąsiadów. Napisz program, który przetestuje działanie tej funkcji, wypełniając tablicę losowymi wartościami.
*/
#include <cstdio>
#include <cstdlib>
#include <ctime>

float randRange(int min, int max) {
    return rand() % (max-min+1) + min;
}

const int N = 10;
const int M = 5;

void avg(float arr[][M], float tmp[][M], int n, int m) {
    int counter;
    float sum;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            sum = arr[i][j];
            counter = 1;
            if (i>0)        sum += arr[i-1][j], counter++;
            if (i < n-1)    sum += arr[i+1][j], counter++;
            if (j > 0)      sum += arr[i][j-1], counter++;
            if (j < m-1)    sum += arr[i][j+1], counter++;

            tmp[i][j] = sum / counter;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = tmp[i][j];
        }
    }
}

void print2DArray(float array[][M], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%5.1f", array[i][j]);
        }
        printf("\n");
    }
}

void randFill2DArray(float array[][M], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            array[i][j] = randRange(10, 100);
        }
    }
}

/*
    Dwuwymiarowa na jednowymiarową: arr[i][j] = arr[i*m + j];
    Gdzie: int arr[n][m] = {};
*/

int main() {
    srand(time(0));
    float arr[N][M], tmp[N][M];

    randFill2DArray(arr, N, M);
    print2DArray(arr, N, M);
    avg(arr, tmp, N, M);
    printf("\n");
    print2DArray(arr, N, M);
}

/*
    <cstring> important functions
    - strstr: substring
    - strlen: str length
    - strcpy: copy to string
*/
