#include <cstdlib>
#include <iostream>
#include <ctime>

// Napisz funkcję w języku C++,
// która przyjmuje jako argument liczbę całkowitą n.
// Funkcja powinna wyświetlić n liczb pseudolosowych z przedziału <20;40>.

int randomGen(int min, int max) {
    return rand()%max+1 + (max-min) ;
}

void printRandomNum(int n) {
    for (int i = 1; i <= n; ++i) {
        int x = randomGen(20, 40);
        std::cout << x << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    printRandomNum(n);
    return 0;
}
