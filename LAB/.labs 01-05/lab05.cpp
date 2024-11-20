// conv: AlaMaKota1
#include <cstdio>
#include <iostream>

// void f(int &value, int a) {
//     value = a;
// }

// int main() {
//     int value = 100;
//     std::cout << value << std::endl;
//     f(value, 11);
//     std::cout << value << std::endl;
// }

void arrPrint(int arr[], int arrLen) {
    for (int i = 0; i < arrLen; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void bubbleSort(int arr[], int arrLen) {
    // n*n operations worst case
    // for x in table check all table elements, if x > x+1 swap them and check next elements
    for (int i = 0; i < arrLen; ++i) {
        for (int j = 0; j < arrLen - i - 1; ++j) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

void dictPrintUnique(int arr[], int arrLen) {
    bubbleSort(arr, arrLen);
    // arrlen - 1 zeby nie wyjsc poza tablice
    for (int i = 0; i <= arrLen - 1; ++i) {
        if (arr[i] != arr[i+1]) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

#define SQUARE(x) ((x)*(x))
// lepsze rozwiazanie
// use only for small functions
inline int square(int x) {return x*x;}

// 3. Napisz funkcję w języku C++, która będzie własną implementacją generatora liczb pseudolosowych np. generator liniowy Lehmara. Napisz program w języku C++, który przetestuje ten generator.

int lcg(int a, int b, int m, int seed, int n) {
    if (n == 1) return seed % m;
    return (a * lcg(a, b, m, seed, n-1) + b) % m;
}

// 4. Napisz funkcję w języku C++, która wyświetla wartości od 1 do N, bez użycia pętli. Zaimplementuj odpowiedni program, który sprawdzi działanie funkcji i wczyta od użytkownika wartość zmiennej N.
void printN(int current, int max) {
    if (current <= max) {
        std::cout << current << std::endl;
        printN(current + 1, max);
    }
}

// 6. Napisz funkcję w języku C++, która przyjmuje w argumencie liczbę całkowitą bez znaku K. Funkcja powinna zwracać wartość K-tego wyrazu ciągu Fibonacciego. Napisz program w języku C++, który sprawdzi działanie tej funkcji.
unsigned int fib(unsigned int k) {
    // wartość kazdego kolejnego elementu jest suma dwoch poprzednich
    return k < 2 ? k : fib(k-1) + fib(k-2);
}
unsigned int fib_iter(unsigned int k) {
    // wartość kazdego kolejnego elementu jest suma dwoch poprzednich
    if (k < 2) return k;
    int a = 0, b = 1, c;
    for (int i = 3; i <= k; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    // int t[] = {1, 3, 5, 4, 6, 7, 9, 11, 11, 5, 3};
    // int arrLen = sizeof(t) / sizeof(t[0]);
    // arrPrint(t, arrLen);
    // bubbleSort(t, arrLen);
    // arrPrint(t, arrLen);
    // int t2[] = {3, 3, 5, 5, 2, 3, 1, 2, 8};
    // dictPrintUnique(t, arrLen);

    // int v;
    // std::cin >> v;
    // // wada makrodefinicji SQUARE(x): jeśli uzyjemy v++ to (v++ * v++)
    // std::cout << square(v) << std::endl;
    // return 0;
    // int seed = time(0), a = 403, b = 43, m = 201;
    // for (int i = 1; i < 200; ++i) {
    //     std::cout << lcg(a, b, m, seed, i) << " ";
    // }
    // std::cout << "\n";
    //printN(1, 25);
    unsigned int n, result;
    printf("test");
    while(scanf("%u", &n) == 1) {
        result = fib_iter(n);
        printf("%u \n", result);
    }
    return 0;
}
