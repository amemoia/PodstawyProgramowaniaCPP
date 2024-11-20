/*
2. Napisz funkcje w języku C++, która zamienia wartościami dwie liczby rzeczywiste.
Napisz program, który przetestuje działanie tej funkcji.
*/

#include <cstddef>
#include <iostream>
#include <cstdio>

void swap1(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void swap2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
    a = b = nullptr;
}

// metoda bitowa tylko dla intow
void swap3(int *a, int *b) {
    if (*a != *b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

int main() {
    int a = 10, b = 5;
    int *ptr_a = &a, *ptr_b = &b;
    std::cout << a << " " << b << std::endl;
    swap1(a,b);
    std::cout << a << " " << b << std::endl;
    swap2(ptr_a, ptr_b);
    std::cout << ptr_a << " " << ptr_b << std::endl;
    std::cout << a << " " << b << std::endl;
    swap3(&a, &b);
    std::cout << a << " " << b << std::endl;

}
