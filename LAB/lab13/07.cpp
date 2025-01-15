/*
7. Napisz program w języku C++, który zdefiniuje typ złożony reprezentujący wektor
za pomocą trzech współrzędnych kartezjańskich XYZ.
Napisz funkcje w języku C++, które przyjmują trzy wskaźniki na ten typ v1, v2 i result.
Funkcje powinny obliczyć: a) sumę wektorów i b) różnicę wektorów.
*/

#include <iostream>
#include <cstdio>

struct Vector3D{float x,y,z;};

void add(Vector3D *v1, Vector3D *v2, Vector3D *result) {
    result->x = v1->x + v2->x;
    result->y = v1->y + v2->y;
    result->z = v1->z + v2->z; 
}
void sub(Vector3D *v1, Vector3D *v2, Vector3D *result) {
    result->x = v1->x - v2->x;
    result->y = v1->y - v2->y;
    result->z = v1->z - v2->z; 
}
void printVector3D(const Vector3D *v) {
    // std::cout << "X: " << v.x << " Y: " << v.y << " Z: " << v.z << std::endl;
    printf("X: %10.2f Y: %10.2f Z: %10.2f\n", v->x, v->y, v->z);
}

int main() {
    //Vector3D v1 = {1, 2, 3}, v2 = {2, 4, 6}, result = {0, 0, 0};
    Vector3D *v1     = new Vector3D;
    Vector3D *v2     = new Vector3D;
    Vector3D *result = new Vector3D;
        v1->x = 1,     v1->y = 2,     v1->z = 3;
        v2->x = 2,     v2->y = 4,     v2->z = 6;
    result->x = 0, result->y = 0, result->z = 0;
    add(v1, v2, result);
    printVector3D(result);
    sub(v1, v2, result);
    printVector3D(result);
    delete v1;
    delete v2;
    delete result;
}