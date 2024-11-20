/*
    Napisz funkcję rekurencyjną w języku C++,
    która oblicza rozmiar napisu (char str[]).
    Napisz program w języku C++, który przetestuje działanie tej funkcji.
*/

#include <iostream>


// str[0] = *(str + 0)
int strlen_recursive(char str[], int i = 0) {
    char *ptr = (str + i);
    if (*ptr == '\0') return i;
    else {
        return strlen_recursive(str, i+1);
    };
}

// shorter method
int strlen_recursive2(char str[], int iter = 0) {
    return *str ? strlen_recursive2(str+1, iter+1) : iter;
}

int main() {
    char str[] = "Ala ma kota";
    std::cout << strlen_recursive(str) << std::endl;
    std::cout << strlen_recursive2(str) << std::endl;

}
