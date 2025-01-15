/*
    Napisz program w C++ ktory dodaje, odejmuje, mnozy, dzieli 
    dwie liczby zespolone oraz obliczne sprzezenie zespolone
    nastepnie program powinien wyswietlic wyniki tych operacji
*/
#include <complex>
#include <iostream>

typedef std::complex<double> complex;

int main() {
    complex complex1(1., 3.);
    complex complex2(1., -4.);
    complex sum  = complex1 + complex2;
    complex sub  = complex1 - complex2;
    complex mult = complex1 * complex2;
    complex div  = complex1 / complex2;
    complex conj = std::conj(complex1);
    std::cout << "Complex 1: " << complex1 << std::endl
              << "Real of 1: " << std::real(complex1) << std::endl
              << "Complex 2: " << complex2 << std::endl
              << "Imag of 2: " << std::imag(complex2) << std::endl
              << "sum: " << sum << std::endl
              << "sub: " << sub << std::endl
              << "mult" << mult << std::endl
              << "div" << div << std::endl
              << "conj" << conj << std::endl;
    return 0;
}