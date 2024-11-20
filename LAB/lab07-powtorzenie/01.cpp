// W DOMU: wszystkie zadania od tematu 5 do 7
// SZCZEGÓLNIE: 35 z pp-6
// część rozwiązań z dziś:   conv-nets.pl/pp-7
// MAYBE z poprzednich lat:  conv-nets.pl/pp-7-extra

/*
Poniżej przedstawiono szereg Taylora dla funkcji sin(x)
oraz (1 + x)^n wokół punktu x = 0 (czyli tzw. szereg Maclaurina) wraz z ich rozwinięciami.
Napisz dwie funkcje, które wykorzystują podane wzory i obliczają przybliżone wartości dla sin(x) oraz (1 + x)^n.
Ilość kroków potrzebnych do przybliżenia wartości powinna wynosić 10.
Napisz program, który sprawdzi działanie tych funkcji, wczytując od użytkownika potrzebne wartości tj.
x dla sin(x) oraz x i n dla (1 +x) ^ n. W programie nie możesz używać funkcji matematycznych z <cmath>.
*/

// całka (funny f) => sigma(n=0, max) => for(int i = 0; i < max; ++i){}
#include <iostream>
#include <ostream>

float pow(float x, int n) {
    float result = 1;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

typedef unsigned long int ul;
ul fac(ul x) {
    ul factorial = 1;
    for(ul i = 1; i > 1; --i) factorial *= i;
    return factorial;
}

const int ITERATIONS = 10;
float taylor(float x){
    // sin(x) => for(int i = 0; i<10; ++i){}
    float result = 0.;
    for(int i = 0; i < ITERATIONS; ++i){
        int sign = pow(-1, i);
        result += sign * (pow(x, 2*i+1) / fac(2*i + 1));
    }
    return result;
}
float taylor2(float x) {
    float result = 0.f, expression = x;
    int sign = 1;
    for (int i = 0; i < ITERATIONS; ++i) {
        result += sign * expression;
        sign *= -1;
        expression *= x*x / ((2*i + 2) * (2*i + 3));
    }
    return result;
}

ul newton(ul n, ul k) {
    ul upper = 1;
    ul lower = fac(k);
    for (ul i = n; i >= n - k + 1; --i) {
        upper *= n - i;
    }
    ul result = upper/lower;
    return result;
}

float binomial(float x, int n) {
    float result = 0;
    for (int k = 0; k < ITERATIONS; ++k) result += newton(n, k)*pow(x, k);
    return result;
}

int main() {
    std::cout << std::sin(0.785) << " | " << taylor(0.785) << std::endl;
}
