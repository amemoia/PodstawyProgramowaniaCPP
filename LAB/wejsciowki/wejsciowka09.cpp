/*
Zaprojektuj strukturę Point, która posiada dwa pola typu zmiennoprzecinkowego x, y,
następnie napisz funkcję, która przyjmuje dwa argumenty typu Point.
Metoda powinna zwrócić odległość między punktami przekazanymi w argumencie.
*/

#include <cmath>
#include <iostream>

struct Point
{
    float x, y;
};

float dist(Point p1, Point p2) {
    return sqrt( pow(p2.x - p1.x, 2) +  pow(p2.y - p1.y, 2));
}

int main() {
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    std::cout << "Dist: " << dist(p1, p2) << std::endl;
}