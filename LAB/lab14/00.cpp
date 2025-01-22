/*
    kolos:
    wskaźnik void, tablica dynamicznie dwuwymiarowa, np. przepisz co drugi element, substring itd
    egz:
    pliki za pomocą cstdio
    fprintf, fscanf, fwrite, fread, fseek, fsetpos, fclose
*/

// Omowienie wejsciowki

#include <cmath>

struct Point
{
    float x, y;
};

float dist(Point p1, Point p2) {
    return sqrt( pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) );
}
