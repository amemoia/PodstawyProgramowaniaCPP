/*
conv:

1. Napisz program w języku C++, który wczyta od użytkownika przedział lewo stronnie domknięty w formacie <a;b).
Następnie program powinien wyświetlić wszystkie liczby niepodzielne przez 3 i 5 w tym przedziale.
Przykład: <3;16) 4, 7, 8, 11, 13, 14

2. Napisz funkcję w języku C++, która przyjmuje dwie liczby całkowite i zwraca ich iloczyn.

3. Napisz program w języku C++, który wyświetla zmienną całkowitą wczytaną od użytkownika.
Wartość tej zmiennej powinna być modyfikowana za pomocą funkcji f, która przyjmuje jeden argument całkowity.
Funkcja powinna ustawiać wartość zmiennej na wartość przekazaną w argumencie.

4. Napisz program w języku C++, który wyświetla informację,
czy jest możliwe skonstruowanie trójkąta z krawędzi o długościach wczytanych od użytkownika.

5. Napisz program w języku C++, który obliczy największy wspólny dzielnik i najmniejszą wspólną wielokrotność.
Stwórz do tego dwie odpowiednie funkcje.

6. Zadeklaruj funkcję w języku C++, która przyjmuje typ figury szachowej,
jej pozycję na szachownicy oraz pozycję docelową. Typ powinien być liczbą całkowitą,
zaś każda z pozycji parą: liczba, znak. Funkcja powinna sprawdzać, czy dany typ figury można przemieścić na daną pozycję.

7. Napisz funkcję, która przyjmie w argumencie liczbę zmiennoprzecinkową. Funkcja powinna zwrócić jej część ułamkową.

8. Napisz funkcję w języku C++, która oblicza wartość liczby PI metodą Monte Carlo.

9. Napisz program w języku C++, który stworzy 10-cio elementową tablicę liczb całkowitych
i wypełni ją losowymi liczbami z przedziału <0,100>. Na koniec program powinien wyświetlić elementy tej tablicy.

10. Do poprzedniego programu dopisz funkcję, która posortuje stworzoną tablicę.
Program powinien wyświetlać posortowaną tablicę.

11. Napisz funkcję w języku C++, która przyjmie jako argumenty automatyczną tablicę wartości całkowitych
i ilość jej komórek. Funkcja powinna wyświetlać wszystkie unikalne wartości w tej tablicy.

12. Napisz program w języku C++, który odwraca kolejność elementów w tablicy.

13. Napisz program w języku C++, który obliczy sumę wszystkich elementów tablicy,
jej średnie arytmetyczną, geometryczną i harmoniczną oraz odchylenie standardowe.

14. Napisz program w języku C++, który wykona dla dwóch N-elementowych tablic liczb zmiennoprzecinkowych
operację iloczynu skalarnego i wyświetli wynik. Iloczyn skalarny jest operacją zdefiniowaną jako suma iloczynów elementów o tych samych współrzędnych.

15. Napisz program w języku C++, który dla tablicy liczb całkowitych przesuwa o 1 w prawo wszystkie elementy tablicy
(tak, żeby wartość elementu o indeksie 0 znalazła się w elemencie o indeksie 1,
wartość elementu o indeksie 1 znalazła się w elemencie o indeksie 2,
zaś wartość elementu o indeksie n-1 w elemencie o indeksie 0).

16. Napisz program w języku C++, który rozbudowuje funkcjonalność poprzedniego programu
o możliwość przesuwania o dowolną ilość indeksów (również dla przesunięć ujemnych).

17. Napisz program w języku C++, który utworzy 5-elementową tablicę liczb całkowitych
i zapisze w jej komórkach 5 liczb podanych ze standardowego wejścia. Na koniec program powinien wyświetlić elementy tablicy.

18. Napisz program w języku C++, który utworzy dwie tablice liczb całkowitych n- i m-elementową.
Rozmiary n i m zdefiniuj w kodzie z użyciem stałych. Zapełnij te tablice danymi
(w dowolny sposób, np. wprowadzonymi ze standardowego wejścia, kolejnymi lub pseudolosowymi liczbami).
Następnie utwórz tablicę o rozmiarze n + m i zapisz w jej n początkowych komórkach zawartość tablicy n-elementowej,
a w pozostałych zawartość tablicy m-elementowej.

19. Napisz program w języku C++, który utworzy n-elementową tablicę liczb całkowitych i zapełni ją danymi.
Program powinien wyświetlić indeks komórki tablicy, w której została znaleziona liczba o największej wartości.
Jeżeli ta sama liczba pojawia się w większej liczbie komórek, należy wyświetlić indeks dowolnej z nich.

20. Zmodyfikuj program z poprzedniego zadania tak, aby w przypadku,
gdy liczba o największej wartości pojawia się w tablicy wielokrotnie,
program wyświetlił indeksy wszystkich komórek, w których znajduje się ta liczba.

21. Napisz program w języku C++, który utworzy n-elementową tablicę liczb całkowitych i zapełni ją danymi.
Program powinien zmodyfikować zawartość tablicy tak, aby liczby parzyste znalazły się w początkowej,
a liczby nieparzyste w końcowej części tablicy. Kolejność liczb w ramach grupy parzystych i nieparzystych jest dowolna.
*/
#include <cstddef>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

int value2;

void zad_w() {
    float temp, threshold = 100.f, result = 0.f;
    while (result <= threshold) {
        std::cin >> temp;
        result += temp;
    }
    std::cout << "Wynik: " << result - threshold << std::endl;
}

void zad01() {
    // <a ; b)
    // wyswietl niepodzielne przez 3 i 5 w tym przedziale
    float a, b;
    std::cin >> a;
    std::cin >> b;
    for (int i = a; i < b; ++i) {
        // reszta z dzielenia przez 3 i reszta dzielenia przez 5
        if (i % 3 != 0 && i % 5 != 0) {
            std::cout << i << " ; ";
        }
    }
}

// Napisz funkcję w języku C++, która przyjmuje dwie liczby całkowite i zwraca ich iloczyn.
int zad02(int a, int b) {
    return a*b;
}

/*
3. Napisz program w języku C++, który wyświetla zmienną całkowitą wczytaną od użytkownika.
Wartość tej zmiennej powinna być modyfikowana za pomocą funkcji f, która przyjmuje jeden argument całkowity.
Funkcja powinna ustawiać wartość zmiennej na wartość przekazaną w argumencie.
*/

void setValue(int &arg, int value) {
    arg = value;
}
void setValueAlt(int newValue) {
    value2 = newValue;
}
/*
    int value = 10, value2 = 10;
    std::cout << value << " ; " << value2 << std::endl;
    setValue(value, 11);
    setValueAlt(11);
    std::cout << value << " ; " << value2;
*/

/*
4. Napisz program w języku C++, który wyświetla informację,
czy jest możliwe skonstruowanie trójkąta z krawędzi o długościach wczytanych od użytkownika.


bool isValidTriangle(float a, float b, float c) {
    if ((a+b)>=c && (a+c)>=b && (b+c)>=a) return true;
    else return false;
}

int main() {
    float a,b,c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << "Trojkat " << (isValidTriangle(a, b, c) ? "mozliwy":"niemozliwy");
}
*/

/*
5. Napisz program w języku C++, który obliczy największy wspólny dzielnik i najmniejszą wspólną wielokrotność.
Stwórz do tego dwie odpowiednie funkcje.

6. Zadeklaruj funkcję w języku C++, która przyjmuje typ figury szachowej,
jej pozycję na szachownicy oraz pozycję docelową. Typ powinien być liczbą całkowitą,
zaś każda z pozycji parą: liczba, znak. Funkcja powinna sprawdzać, czy dany typ figury można przemieścić na daną pozycję.
*/

int gcd(int a, int b){
    if (a < b) {
        std::swap(a, b);
    }
    while(b != 0) {
        int r = b;
        b = a%b;
        a = r;
    }
    return a;
}
int leastCommonMultiple(int a, int b){
    return a*b/gcd(a, b);
}

float floatFraction(float n){
    if(n < 0) n = -n;
    // UWAGA: float ma większy zakres wartości niz int
    // return n - (int)n;
    return n - floor(n);
}

// zad 6: tylko deklaracja
bool checkPieceMovement(int, int, char, int, char);

float randFract() {
    return (float)rand() / RAND_MAX;
}

// zad 8: pi metoda monte carlo
float piMC(int n) {
    float x, y;
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        x = randFract();
        y = randFract();
        if( (x - 0.5f) * (x - 0.5f ) + (y - 0.5f) * (y - 0.5f ) <= 0.5f * 0.5f) ++counter;
    }
    return 4.f * counter / n;
}
/*
int main() {
    // <cstdlib>
    // <ctime>
    srand(time(NULL)); // time(0)
    std::cout << piMC(10000) << std::endl;
}
*/

// zad9
/*
9. Napisz program w języku C++, który stworzy 10-cio elementową tablicę liczb całkowitych
i wypełni ją losowymi liczbami z przedziału <0,100>. Na koniec program powinien wyświetlić elementy tej tablicy.
*/

void zad9() {
    // const int N = 10;
    int arr[10];

}

int main() {
    zad9();
    return 0;
}
