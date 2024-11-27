/*
    Napisz funkcję w języku C++, która przyjmie jako argumenty tablicę wartości zmiennoprzecinkowych,
    jej rozmiar, dwie wartości zmiennoprzecinkowe – minimum i maksimum,
    oraz wskaźnik na uprzednio zaalokowaną wartość całkowitą.
    Funkcja powinna zaalokować i zwrócić tablicę,
    w której znajdą się liczby z lewostronnie domkniętego przedziału od minimum do maksimum.
    Pod wartością wskaźnika z argumentu należy zapisać rozmiar nowoutworzonej tablicy.
*/
#include <iostream>

float *f(float arr[], int size, float min, float max, int *ptr) {
    // new float[] = {min, ..., max-1}
    float *newArr = nullptr;
    int addNumCount = 0;
    float *temp = new float[size];
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= min && arr[i] < max) {
            temp[addNumCount++] = arr[i];
        }
    }
    if (addNumCount == 0) {
        *ptr = addNumCount;
        return newArr;
    }
    newArr = new float[addNumCount];
    for (int i = 0; i < addNumCount; ++i) {
        newArr[i] = temp[i];
    }
    delete[] temp;
    *ptr = addNumCount;
    return newArr;
}

int main() {
    int n = 10;
    float arr[] = {0.5f, 0.7f, 1.25f, 6.25f, 9.3f, 1.13f, 2.23f, 3.2f, 6.23f, 1.78f};
    int *value = new int;
    float *result = f(arr, n, 1.13f, 6.3f, value);
}
