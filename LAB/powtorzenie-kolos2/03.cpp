/*
Napisz program, który obliczy i wyświetli długości dwuwymiarowych wektorów
zapisanych w jednowymiarowej tablicy liczb zmiennoprzecinkowych.
Tablica z wektorami wejściowymi ma być skonstruowana w ten sposób,
że kolejne współrzędne (x, y) każdego wektora zajmują kolejne elementy tablicy,
czyli:  [x1,y1, x2,y2, x3,y3, …, xn,yn]. 

Zdefiniuj funkcję arr_fun, która w parametrach przyjmie:
(1) wskaźnik na początek tablicy wektorów,
(2) wskaźnik na za-ostatni element tej tablicy,
(3) wskaźnik na początek tablicy wynikowej z obliczonymi długościami
oraz (4) wskaźnik na funkcję pomocniczą, która zwraca wartość zmiennoprzecinkową
a w parametrach bierze dwie wartości zmiennoprzecinkowe.

Zdefiniuj funkcję pomocniczą,
która zwróci długość wektora przy podaniu przez parametry jego dwóch współrzędnych.
W funkcji głównej stwórz przykładową dynamiczną tablicę wektorów,
wyznacz za pomocą stworzonej funkcji arr_fun ich długości
i wyświetl powstałą w ten sposób tablicę wynikową.
W zadaniu nie można używać funkcji z biblioteki <algorithm>.

Przykład:
IN:     [1.0,1.0  2.0,1.0  1.0,3.0  3.0,1.0]
OUT: [1.414214 2.236068 3.162278 3.162278]
*/
#include <iostream>
#include <cmath>

float vectorlen(float x, float y) {
    return std::sqrt(x*x + y*y);
}

void arr_fun(float* arr_start, float* arr_end, float* results_start, float (*vectorlen)(float, float)) {
    int arrlen = (arr_end - arr_start) / 2;
    for (int i = 0; i < arrlen; i++)
    {
        int v1 =  i*2;
        int v2 = v1+1;
        *(results_start + i) = vectorlen(*(arr_start+v1), *(arr_start+v2));
    }
    
}

int main() {
    int len = 4;
    float *v {new float[len*2] {1.0,1.0,  2.0,1.0,  1.0,3.0,  3.0,1.0} };
    float *results = new float[len];
    //v[0]=1.f,v[1]=1.f,  v[2]=2.f,v[3]=1.f,  v[4]=1.f,v[5]=3.f,  v[6]=3.f,v[7]=1.f; 
    arr_fun(v, v+8, results, vectorlen);
    for (int i = 0; i < len; i++)
    {
        std::cout << results[i] << " ";
    }
    delete[] v;
    delete[] results;
}