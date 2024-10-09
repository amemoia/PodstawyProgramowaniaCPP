// Przygotowanie do lab02

#include <iostream>
#include <cstdio>
#include <cmath>

void zad01() {
    int val1, val2;
    std::cout << "Zad 1)" << std::endl
    << "int val1: ";
    std::cin >> val1;
    std::cout << "int val2: ";
    std::cin >> val2;
    if (val1 == val2) std::cout << "Liczby sa rowne." << std::endl;
    else std::cout << "Liczby nie sa rowne." << std::endl;
}

void zad02() {
    float val1, val2;
    std::cout << "Zad 2)" << std::endl
    << "float val1: ";
    std::cin >> val1;
    std::cout << "float val2: ";
    std::cin >> val2;
    if (val1 == 0.f || val2 == 0.f) std::cout << "Uwaga: jedna z liczb jest zerem." << std::endl;
    std::cout << "Wynik: " << val1/val2 << std::endl;
}

void zad03() {
    int a, b, c;
    std::cout << "Zad 3)" << std::endl
    << "int a: ";
    std::cin >> a;
    std::cout << "int b: ";
    std::cin >> b;
    std::cout << "int c: ";
    std::cin >> c;
    // czy c > b > a
    if (b > a && b < c) std::cout << "int b jest wiekszy od a i mniejszy od c";
    else std::cout << "int b nie jest wiekszy od a i mniejszy od c";
}

void zad04() {
    int a;
    std::cout << "Zad 4)" << std::endl
    << "int a: ";
    std::cin >> a;
    bool warunek = false;
    if (a % 6 == 0) {
        std::cout << "Liczba jest podzielna przez 6." << std::endl;
        warunek = true;
    }
    if (a % 3 == 0) {
        std::cout << "Liczba jest podzielna przez 3." << std::endl;
        warunek = true;
    }
    if (a % 2 == 0) {
        std::cout << "Liczba jest podzielna przez 2." << std::endl;
        warunek = true;
    }
    if (warunek == false) std::cout << "Liczba nie jest podzielna przez 6, 3 czy 2." << std::endl;
}

void zad05() {
    // delta = b^2 - 4ac
    // x = -b/2a
    // x1 = -b-sqrt(delta)/2a
    // x2 = -b+sqrt(delta)/2a
    float a, b, c;
    std::cout << "Zad 5)" << std::endl
    << "float a: ";
    std::cin >> a;
    std::cout << "float b: ";
    std::cin >> b;
    std::cout << "float c: ";
    std::cin >> c;
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        std::cout << "delta < 0, nie istnieje rozwiazanie rownania kwadratowego" << std::endl;
    }
    else if (delta == 0) {
        float x = (-b)/(2*a);
        std::cout << "istnieje jedno rozwiazanie: " << x << std::endl;
    }
    else if (delta > 0) {
        float x1 = ((-b) - sqrt(delta))/(2*a);
        float x2 = ((-b) + sqrt(delta))/(2*a);
        std::cout << "istnieja dwa rozwiazania: " << std::endl << x1 << std::endl << x2 << std::endl;
    }
}

int main() {
    zad05();
    return 0;
}
