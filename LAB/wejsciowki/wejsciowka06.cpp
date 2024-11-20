#include <iostream>
#include <cstdio>
#include <cmath>

/*
Pewną powierzchnię pokrywają nadajniki radiowe.
Każdy nadajnik znajduje się w pozycji oznaczonej za pomocą współrzędnych x, y na słupie o wysokości z.
Każdy nadajnik zapewnia łączność w obszarze kuli o promieniu r, w której środku znajduje się nadajnik.
Osoba z odbiornikiem znajduje się w pozycji x, y na wysokości gruntu (z=0).
Odbiornik połączy się z najbliższym nadajnikiem, w którego zasięgu będzie.
Napisz funkcję, która przyjmie parametry: (1) liczbę n nadajników, (2/3/4) trzy tablice,
po jednej dla współrzędnych (x, y, z) kolejnych nadajników, (5) promień r nadajników,
(6, 7) współrzędne x, y osoby z odbiornikiem. Wszystkie współrzędne są liczbami zmiennoprzecinkowymi.
Funkcja powinna zwrócić indeks odbiornika, z którym połączy się odbiornik, lub -1, jeżeli nie połączy się z żadnym.
Zilustruj użycie tej funkcji w programie; wyświetl na ekranie wynik.

PRZYKŁAD:
IN: n=6, x[]={2,2,3,5,6,8}, y[]={2,6,3,7,1,6}, z[]={2,1,1.5,2,2,2}, r=2.5, x=7, y=2.
OUT: 4
*/

void scanIntoArray(float arr[], int n) {
    for (int i = 0; i < n; ++i) {
        float value;
        scanf("%f", &value);
        arr[i] = value;
    }
}

int recieverIndex(int n, float arr_x[], float arr_y[], float arr_z[], float r, float x, float y) {
    int index = -1;
    float smallestDist = -1;
    for (int i = 0; i < n; i++) {
        float r_x = arr_x[i];
        float r_y = arr_y[i];
        float r_z = arr_z[i];
        float dist_x = r_x - x;
        float dist_y = r_y - y;
        float dist_z = r_z;
        if (dist_x< r && dist_y < r && dist_z< r) {
            float overall_dist = sqrt((dist_x*dist_x)+(dist_y*dist_y)+(dist_z*dist_z));
            if (smallestDist == -1 || overall_dist < smallestDist) {
                index = i;
                smallestDist = overall_dist;
            }
        }
    }
    return index;
}

int main() {
    int n; // (1) liczba nadajnikow
    // 100: max elementow
    float arr_x[100] = {}, arr_y[100] = {}, arr_z[100] = {}; // (2/3/4) X, Y, Z coords
    float r; // (5) promień nadajników
    float x, y; // (6/7) osoba z odbiornikiem
    printf("n: ");
    scanf("%d", &n);
    printf("(enter po kazdej liczbie) arr_x: ");
    scanIntoArray(arr_x, n);
    printf("(enter po kazdej liczbie) arr_y: ");
    scanIntoArray(arr_y, n);
    printf("(enter po kazdej liczbie) arr_z: ");
    scanIntoArray(arr_z, n);
    printf("r: ");
    scanf("%f", &r);
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);
    std::cout << "Indeks odbiornika: " << recieverIndex(n, arr_x, arr_y, arr_z, r, x, y) << std::endl;
    return 0;
}
