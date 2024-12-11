/*
    Zaprojektuj i zdefiniuj funkcję dyadic(),
    która oblicza i zwraca iloczyn diadyczny dwóch wektorów 3-elementowych przekazanych w argumentach.
    Do reprezentacji wektorów i macierzy użyj tablic automatycznych.
    W funkcji głównej pokaż użycie tej funkcji.
    Iloczyn diadyczny dwóch wektorów n-wymiarowych daje w wyniku macierz nxn-wymiarową
    (zob. https://pl.wikipedia.org/wiki/Iloczyn_diadyczny)
*/


// v1 = [x1, y1, z1]
//
//      [x2,
// v2 =  y2,
//       z2]
//
// [ x1*x2, x1*y2, x1*z2,
//   y1*x2, y1*y2, y1*z2,      <-->  v1*v2
//   z1*x2, z1*y2, z1*z2 ]

#include <iostream>

void dyadic(float v1[], float v2[], float* resultArr) {
    float result[9] = {}; // rozmiar 3x3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultArr[i*3 + j] = (v1[i]) * (v2[j]);
        }
    }
}

void print_dyadic(float arr[]) {
    for (int i = 0; i < 9; i++)
    {
        std::cout << arr[i] << " ";
        if (i != 8 && (i+1) % 3 == 0) std::cout << std::endl;
    }
}

int main() {
    float v1[] = {2, 4, 8};
    float v2[] = {10, 20, 30};
    float result[9] = {};
    dyadic(v1, v2, result);
    print_dyadic(result);
}