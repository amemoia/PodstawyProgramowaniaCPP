/*
    Napisz program w języku C++,
    który zaalokuje pamięć dla dwóch 10-elementowych tablic liczb całkowitych: a i b.
    Następnie program powinien wczytać od użytkownika wartość całkowitą x i wypełnić nią tablicę a,
    zaś tablica b powinna być uzupełniona wartością x, powiększoną o 2.
    Na koniec program powinien wyświetlić obie tablice,
    zaimplementowane rozwiązanie nie powinno używać pętli.
*/

#include <algorithm>
#include <iostream>

int op_inc(int x) {return x+2;}
void print_elem(int x) {std::cout << x << " ";}

int main() {
    int *a = new int[10];
    int *b = new int[10];
    int x;
    std::cin >> x;
    std::fill(a, a+10, x);
    std::transform(a, a+10, b, op_inc);
    std::for_each(a, a+10, print_elem); std::cout << std::endl;
    std::for_each(b, b+10, print_elem); std::cout << std::endl;
    delete[] a;
    delete[] b;
    a = b = nullptr;
}