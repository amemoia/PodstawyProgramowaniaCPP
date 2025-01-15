/*
    5. Napisz program w języku C++, który zdefiniuje typ złożony reprezentujący
    punkt w dwuwymiarowej przestrzeni euklidesowej. 
    Punkt powinien być wyznaczony za pomocą dwóch współrzędnych.
    Następnie wczytaj od użytkownika współrzędne dwóch punktów.
    Oblicz i wyświetl odległość pomiędzy tymi punktami.
*/

#include <iostream>
#include <cmath>

struct Point {float x, y;};

int main() {
    Point a, b;
    std::cout << "Point 1" << std::endl;
    std::cin >> a.x >> a.y;
    std::cout << "Point 2" << std::endl;
    std::cin >> b.x >> b.y;

    std::cout << "Distance:" << sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    return 0;
}