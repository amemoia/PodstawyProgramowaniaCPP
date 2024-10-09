#include <cstdio>
#include <iostream>
#include <cmath>
#include <cfloat>

typedef unsigned char uchar;

void zad01() {
    // Napisz program w języku C++,
    // który wczytuje od użytkownika dwie liczby zmiennoprzecinkowe podwójnej precyzji a i b.
    // Program powinien wyświetlić te liczby, w następującym formacie
    // a = wartosc_a oraz w kolejnej linii b = wartosc_b.
    // Następnie zamienić wartościami te liczby i ponownie je wyświetlić w tym samym formacie.
    // (tzw. funkcja swap)
    double a, b;
    std::cout << "Zad 1) " << std::endl
    << "Wpisz a: ";
    std::cin >> a;
    std::cout << "Wpisz b: ";
    std::cin >> b;

    std::cout << std::endl
    << "a: " << a << std::endl
    << "b: " << b << std::endl;
    std::swap(a, b);
    std::cout << std::endl
    << "a: " << a << std::endl
    << "b: " << b << std::endl;
}
void zad02() {
    // Napisz program w języku C++, który stworzy stałą zmienną N,
    // a następnie wyświetli jej wartość.
    // (Próby zmiany wartości tej zmiennej powinny zakończyć się błędem kompilacji.)
    const int N = 5;
    std::cout << "Zad 2) Wartosc stalej N: " << N << std::endl;
}
void zad03() {
    // Napisz program w języku C++,
    // który przyjmuje jedno bajtową liczbę całkowitą
    // oraz jedno bajtową liczbę całkowitą bez znaku.
    // Program powinien wyświetlić wartość wczytanych zmiennych.
    signed char num1;
    uchar num2;
    std::cout << "Zad 3)" << std::endl
              << "Wpisz num1 (signed char): ";
    scanf("%hhd" , &num1);
    std::cout << "Wpisz num2 (unsigned char): ";
    scanf("%hhu" , &num2);
    std::cout << "num1 (signed char): " << num1 << std::endl
              << "num2 (unsigned char): " << num2 << std::endl;
}
void zad04() {
    // Napisz program w języku C++,
    // który do jednobajtowej liczby całkowitej ze znakiem doda wartość 200.
    // Wyświetl zmienną po zmianie, uzasadnij wynik.
    signed char num = -56;
    // integer overflow
    num+=200;
    printf("Zad 4) num: %d", num);
}
void zad05() {
    // Napisz program w języku C++, który przyjmuje dwie liczby całkowite,
    // a następnie wyświetli iloraz tych liczb.
    int a, b;
    std::cout << "Zad 5) Wpisz dwie zmienne calkowite:" << std::endl;
    scanf("%d %d", &a, &b);
    std::cout << "Iloraz liczb: " << a/b << std::endl;
}
void zad06() {
    // Napisz program w języku C++,
    // który pobierze ze standardowego wejścia liczbę zmiennoprzecinkową,
    // a następnie wyświetli jej wartość bezwzględną.
    float a;
    std::cout << "Zad 6) Wpisz float:" << std::endl;
    std::cin >> a;
    std::cout << "Wartosc bezwzgledna: " << fabs(a) << std::endl;
}

void zad07() {
    // Oblicz długość przeciwprostokątnej trójkąta
    // dla długości przyprostokątnych wprowadzonych przez użytkownika.
    // Zakładamy, że wprowadzane wartości będą liczbami całkowitymi.
    // Skorzystaj z metody sqrt() i pow() z biblioteki <cmath>.
    // a^2 + b^2 = c^2
    int a, b;
    float c;
    std::cout << "Zad 7) wpisz wartosci przyprostokatnych a, b" << std::endl;
    scanf("%d %d", &a, &b);
    c = sqrt(pow(a, 2) + pow(b, 2));
    printf("przeciwprostokatna: %f", c);
}

void zad08() {
    // Napisz program w języku C++, który obliczy pole sześciokąta foremnego.
    // Program powinien wczytać długości boku od użytkownika, a następnie wyświetlić wynik.
    float a;
    printf("Zad 8) Dlugosc boku szesciokata foremnego: ");
    scanf("%f", &a);
    // P = 6*(pow(a, 2)*sqrt(3)/4)
    float pole = 6*( pow(a,2)*sqrt(3) / 4 );
    printf("Wynik: %f", pole);
}

void zad09() {
    // Napisz program w języku C++, który policzy odległość pomiędzy dwoma punktami.
    // Program powinien pobierać pary liczb określające współrzędne x i y kolejnych wierzchołków.
    float x1, y1, x2, y2;
    printf("Zad 9)\nWpisz x i y dla dwoch pkt\npkt pierwszy:\n");
    scanf("%f %f", &x1, &y1);
    printf("pkt drugi: \n");
    scanf("%f %f", &x2, &y2);
    float d = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
    printf("Odleglosc puntkow: %f", d);
}

void zad10() {
    // Napisz program w języku C++,
    // który wczyta od użytkownika dwie liczby całkowite
    // i zwiększy ich wartość o jeden.
    // Następnie program powinien wypisać iloczyn tych liczb zmniejszony o jeden.
    int a, b;
    printf("Zad 10) Wpisz dwie liczby calkowite:\n");
    scanf("%d %d", &a, &b);
    a++;
    b++;
    printf("Wynik iloczynu po dzialaniach: %d", (a*b)-1);
}

void zad11() {
    // Napisz program w języku C++,
    // który stworzy i zainicjuje dwie liczby zmiennoprzecinkowe
    // następującymi wartościami: 1/10, 1-9/10.
    // Następnie program powinien porównać ich wartości.
    float a = 1/10.f;
    float b = 1.f-9.f/10.f;
    printf("Zad 11)\na = %.8f\nb = %.8f\n", a, b);
    if (fabs(a-b) < FLT_EPSILON) std::cout << "a == b" << std::endl;
    else if (a > b) std::cout << "a > b" << std::endl;
    else if (a < b) std::cout << "a < b" << std::endl;
}

void zad12() {
    // Napisz program w języku C++,
    // który zapamięta wartość dozwolonego wyrażenia logicznego,
    // a następnie wyświetli jego wartość logiczną (1 lub 0).
    bool a = true;
    std::cout << "Zad 12) bool = " << a << std::endl;
}
void zad13() {
    bool a = true;
    a = char(a);
    std::cout << "Zad 13) bool = " << (a?"true":"false") << std::endl;
}

void zad14() {
    // Napisz program w języku C++,
    // który pobierze ze standardowego wejścia 3 liczby zmiennoprzecinkowe
    // – długości boków trójkąta, a następnie wyświetli informację,
    // czy z podanych długości można utworzyć trójkąt.
    float a, b, c;
    std::cout << "Zad 14)" << std::endl
              << "Wpisz trzy floaty" << std::endl;
    std::cin >> a >> b >> c;
    bool w1 = (a+b)>c;
    bool w2 = (b+c)>a;
    bool w3 = (c+a)>b;
    if (w1 && w2 && w2) std::cout << "Mozna stworzyc trojkat" << std::endl;
    else std::cout << "Nie mozna stworzyc trojkat" << std::endl;
}

void zad15() {
    // Napisz program w języku C++ wyznaczający
    // relatywistyczny wzrost masy obiektu
    // poruszającego się z prędkością V, pobieranej z klawiatury.
    // TODO
    float masa, v;
    // predkosc swiatla
    // typ double poniewaz double = 8 bytes vs int = 2 or 4 bytes
    const double c = 299792458;
    std::cout << "Zad 15) Wpisz mase obiektu oraz predkosc, z ktora sie porusza" << std::endl;
    // m = m0 / sqrt(1 - (v*v / c*c))
    if (v >= c) std::cout << "ERR: predkosc nie moze byc rowna lub wieksza predkosci swiatla" << std::endl;
    else {
        float m = masa / sqrt( 1 - (v*v / c*c));
        std::cout << "relatywistyczny wzrost masy wynosi: " << m << std::endl;
    }
}

void zad16() {
    // Prawo Moore’a głosi, że liczba tranzystorów w procesorze podwaja się co 24 miesiące.
    // Jako punkt wyjścia załóżmy procesor Intel 4004 z 1971 roku,
    // który wyposażony był w 2250 tranzystorów.
    // Napisz program w języku C++,
    // który przyjmie ze standardowego wyjścia rok
    // i zwróci liczbę tranzystorów wynikającą z prawa Moore’a.
    // Zweryfikuj założenia prawa Moore’a z danymi historycznymi.
    int i4004 = 2250;
    int i4004_yr = 1971;
    int user_yr;
    printf("Zad 16) wpisz rok \n");
    scanf("%d", &user_yr);
    // roznica lat * 12 / 24 => roznica lat / 2
    float diff = (user_yr - i4004_yr)/2.f;
    // 1r => 2250 * 2
    // 2r => 2250 * 2^2
    float tranz = i4004 * pow(2, diff);
    printf("W roku %d procesory mialy ok. %.0f tranzystorow \n", user_yr, tranz);
}

int main() {
    zad16();
    return 0;
}
