/*
    Napisz program w języku C++, który umożliwi przechowywanie czterech elementów,
    typu zdefiniowanego w poprzednim zadaniu, o dowolnych współrzędnych.
    Następnie program powinien obliczyć i wyświetlić obwód figury wskazanej przez te punkty.
*/

#include <iostream>
#include <cmath>

struct Point {float x, y;};

float dist(const Point &p1, const Point &p2) {
    return sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) );
}

int main() {
    int n = 4;
    Point array[4] = {1, 1,   1, 2,   2, 2,   2, 1};
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += dist(array[i % n], array[(i + 1) % n]);
    }
    std::cout << sum << std::endl;
}