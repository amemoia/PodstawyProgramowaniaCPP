/*
4. Napisz program w języku C++, który usunie plik stworzony w poprzednim zadaniu.
*/

#include <cstdio>

int main() {
    if ( remove("writenum.txt") ) perror("File Removal Error");
}