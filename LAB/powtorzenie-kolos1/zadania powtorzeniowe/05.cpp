/*
    Napisz program, który wczytuje od użytkownika liczbę całkowitą n
    (zakładamy, że n<20). Utwórz tablicę liczb zmiennoprzecinkowych arr,
    która będzie w stanie pomieścić n liczb,
    a następnie wczytaj do niej n wartości ze standardowego wejścia.
    Napisz funkcję, która przyjmuje taką tablicę w argumencie.
    Funkcja ma wyświetlić na standardowym wyjściu kolejne wyrazy ciągu od 1 do n zdefiniowanego wzorem:
    F(0) = 0
    F(n) = (-1)^n * arr_{n-1} + F_{n-1}
    gdzie: ^ - operacja potęgowania
    PRZYKŁAD:
    IN n: 3
    IN a: 0.4, 0.2, 1.4
    OUT: -0.4, -0.2, -1.6
*/

#include <iostream>

int mypow(int val, int pow) {
    int result = 1;
    for (int i = 0; i < pow; i++) result*=val;
    return result;
}

float f(float arr[], int i) {
    if (i == 0) return 0;
    else {
        return mypow(-1, i) * arr[i-1] + f(arr, i-1);
    }
}

void fLoop(float arr[], int n) {
    for (int i = 1; i <= n; i++)
    {
        std::cout << f(arr, i) << " ";
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << "----------" << std::endl;
    if (n >= 20 || n < 0) {
        std::cout << "Bledne dane";
    }
    else {
        float arr[20] = {};
        for (int i = 0; i < n; i++)
        {
            std::cin >> arr[i];
        }
        fLoop(arr, n);
    }
}