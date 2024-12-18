/*
    Przyklad wskaznika na funkcje
    AlaMaKota!
*/

#include <iostream>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int (*fn_ptr)(int, int);
    fn_ptr = add;
    std::cout << fn_ptr(10, 2) << std::endl;
    fn_ptr = sub;
    std::cout << fn_ptr(10, 2) << std::endl;
}