/*
    Napisz funkcję matRows(), która przyjmuje jako argumenty:
    jednowymiarową tablicę automatyczną liczb całkowitych mat,
    liczby całkowite n, m.
    Tablicę mat należy zinterpretować jako tablicę dwuwymiarową o n wierszach i m kolumnach,
    w której kolejne komórki ustawione są wierszami.
    Funkcja powinna zwrócić liczbę wierszy, w których liczby posortowane są rosnąco.
    PRZYKŁAD:
    IN n = 2, m = 3
    IN mat = [1, 6, 3, 5, 6, 7]
    OUT: 1
    bo: mat = | 1 6 3 | (nieposortowane)
                    | 5 6 7 | (posortowane)
*/

#include <iostream>

int matRows(int mat[], int n, int m) {
    // mat: n wierszy m kolumn
    int ascendingRows = 0;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        for (int j = 0; j < m; j++)
        {
            if (j == 0 || mat[i * n + j] > mat[i * n + j-1]) counter++;
        }
        if (counter == m) ascendingRows++;
    }
    return ascendingRows;
}

int main() {
    int n = 2, m = 3;
    int mat[] = {1, 6, 3, 5, 6, 7};
    std::cout << matRows(mat, n, m);
}