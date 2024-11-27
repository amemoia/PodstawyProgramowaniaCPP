/*
    Napisz uniwersalną funkcję swap w języku C++ oraz program, który sprawdzi jej działanie dla różnych typów zmiennych.
*/
#include <iostream>

void my_memcpy(void *destination, void *source, size_t size) {
    // char: 1 byte
    // copying byte after byte
    char *csource = (char*)source;
    char *cdestination = (char*)destination;
    for (size_t i = 0; i < size; ++i) {
        cdestination[i] = csource[i];
    }
}

void my_swap(void *a, void *b, size_t size) {
    char * temp = new char[size];
    my_memcpy(temp, b, size);
    my_memcpy(b, a, size);
    my_memcpy(a, b, size);
    delete[] temp;
    temp = nullptr;
}
