/*
1. Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą.
Następnie program powinien wyświetlić:
– Monday, gdy użytkownik wprowadził 0,
– Tuesday, gdy użytkownik wprowadził 1,
– Wednesday, gdy użytkownik wprowadził 2,
– Thursday, gdy użytkownik wprowadził 3,
– Party dla każdej innej wartości wprowadzonej przez użytkownika.

2. Napisz program w języku C++, który przyjmuje od użytkownika 3 liczby całkowite
i wyświetla największą z nich.

3. Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą.
Następnie program powinien inkrementować tą zmienną
i do momentu dopóki będzie mniejsza niż 10 wyświetlać komunikat Za mało!.

4. Napisz program w języku C++, który wczyta użytkownika dwie liczby całkowite n i k.
Następnie program powinien wyświetlić liczbę n 10 razy.
Na koniec program powinien wyświetlić liczbę k n razy.

5. Napisz program w języku C++, który sumuje liczby, dopóki nie zostanie podana wartość 0.
Użycie instrukcji do…while pozwala nie inicjalizować zmiennej value sztuczną wartością.

6. Napisz program w języku C++, który pobiera granice przedziału domkniętego w formacie <a;b>,
a następnie wyświetla i zlicza wartości bez cyfry 5.

7. Napisz program w języku C++, który sprawdzi parzystość liczby wczytanej od użytkownika.
Program powinien wyświetlić Parzysta, jeśli liczba jest parzysta
w innym przypadku program nie powinien wyświetlać nic.

8. Rok przestępny jest podzielny przez 4.
Wyjątkiem od tej zasady są lata kończące się na 00, które nie są przestępne.
Z kolei wyjątkiem od tego wyjątku są lata podzielne przez 400, które są przestępne.
Napisz program, który przyjmie numer roku i wyświetli leap year, jeżeli to rok przestępny,
a common year w przeciwnym wypadku.

9. Przyjmij cztery wartości zmiennoprzecinkowe oznaczające początek
i koniec dwóch domkniętych przedziałów. Wyświetl intersection,
jeżeli te przedziały mają część wspólną lub no intersection w przeciwnym wypadku.

10. Zmodyfikuj poprzednie zadanie tak,
aby wyświetlało dolną i górną granicę części wspólnej przedziału, jeżeli taka istnieje.

11. Napisz program w języku C++,
który policzy z ilu cyfr składa się podana liczba całkowita (w zapisie dziesiętnym).

12. Napisz program w języku C++ wyświetlający ponownie liczbę dowolnej długości.

13. Napisz program w języku C++,
który będzie pobierał ze standardowego wejścia liczby zmiennoprzecinkowe i sumował je,
aż do momentu przekroczenia przez sumę liczby 100 lub podania liczby 0.
Program powinien wówczas wyświetlić o ile suma przekroczyła liczbę 100 i zakończyć działanie.

14. Napisz program w języku C++,
który wyświetli tabliczkę mnożenia od 0x0 do 10x10 zachowując poprawne odstępy.

15. Zmodyfikuj poprzedni program tak, aby pokazywał fragment tej tabliczki –
trójkąt składający się z wyników niepowtarzających się działań (górny lub dolny do wyboru).

16. Napisz program w języku C++,
który narysuje na ekranie choinkę zbudowaną z gwiazdek * o zadanej wysokości.

17. Napisz program w języku C++,
który wczyta ze standardowego wejścia dwie liczby naturalne n i m,
a następnie wyświetli szachownicę o rozmiarze nxm, w taki sposób,
by występowały w niej na przemian znaki # oraz o.

18. Kalendarz gregoriański, znajdujący się obecnie w powszechnym użyciu,
został wprowadzony w piątek, 15 października 1582 roku.
Korzystając z tej wiedzy, napisz program, który dla tej
i każdej kolejnej daty wyświetli odpowiadający jej dzień tygodnia.
Data powinna być podana w formacie dd.MM.yyyy.
W zadaniu zdefiniuj i wykorzystaj typ wyliczeniowy Weekday {Monday, Tuesday, …, Sunday}.

19. Napisz program w języku C++,
który wczyta ze standardowego wejścia liczbę całkowitą n,
następnie wypisze wszystkie dwuwyrazowe wariacje z powtórzeniami dla zbioru liczb [1;n].

20. Napisz program w języku C++,
który wczytuje ze standardowego wejścia nieujemną liczbę n
i wypisuje na standardowym wyjściu wartość ⌊√n⌋
(wartość √n zaokrągloną w dół do najbliższej wartości całkowitoliczbowej).
Program napisz bez użycia funkcji z biblioteki matematycznej.
Przybliżenie pierwiastka kwadratowego zrealizuj za pomocą metody Herona.

21. Napisz program w języku C++, który pobierze ze standardowego wejścia liczbę całkowitą dodatnią x
i wyświetli wszystkie liczby całkowite z jednostronnie domkniętego zakresu [0, x).

22. Zmodyfikuj poprzedni program tak, aby pobierał liczbę całkowitą (także ujemną)
i wyświetlał wszystkie liczby całkowite z zakresu domkniętego [x, 0] lub [0, x].

23. Napisz program w języku C++,
który pobierze liczbę całkowitą dodatnią n oraz n liczb całkowitych.
Program powinien wyświetlić średnią arytmetyczną tych liczb.

24. Napisz program w języku C++,
który pobierze liczbę całkowitą dodatnią n oraz n liczb całkowitych.
Program powinien wyświetlić największą spośród tych liczb.

25. Napisz program w języku C++,
który będzie pobierał ze standardowego wejścia liczby zmiennoprzecinkowe i sumował je,
aż do momentu podania liczby 0. Wówczas program powinien wyświetlić sumę liczb.
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

// co do wejściówki: warto uzyc int_8 / unsigned int_8

void zad01() {
    int day;
    std::cout << "Wpisz liczbe calkowita: ";
    std::cin >> day;
    if (day == 0) printf("Monday");
    else if (day == 1) printf("Tuesday");
    else if (day == 2) printf("Wednesday");
    else if (day == 3) printf("Thursday");
    else printf("Party");
}

void zad01_switch() {
    int day;
    std::cout << "Wpisz liczbe calkowita: ";
    std::cin >> day;
    switch (day) {
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        default:
            printf("Party");
            break;
    }}


void zad02() {
    int x,y,z;
    std::cout << "Wpisz x: ";
    std::cin >> x;
    std::cout << "Wpisz y: ";
    std::cin >> y;
    std::cout << "Wpisz z: ";
    std::cin >> z;
    int max = (x>y ? (x>z ? x : z) : (y>z ? y : z));
    std::cout << max << std::endl;
}

void zad03() {
    int a;
    std::cout << "Wpisz a: ";
    std::cin >> a;
    while (a++<10) {
        std::cout << "Za mało!" << std::endl;
    }
}

void zad04() {
    int k, n;
    std::cout << "Wpisz k: ";
    std::cin >> k;
    std::cout << "Wpisz n: ";
    std::cin >> n;
    for (int i = 0; i < 10; i++) printf("%d\n", n);
    for (int i = 0; i < n; i++) printf("%d\n", k);
}

void zad05() {
    int add;
    int value = 0;
    do {
        std::cin >> add;
        value += add;
        printf("%d + %d = %d \n", value - add, add, value);
    }
    while (add != 0);
}

void zad06() {
    int a, b;
    int counter = 0;
    printf("<a;b> \n");
    scanf("<%d;%d>", &a, &b);
    for (int i = a; i <= b; i++) {
        // czy liczba ZAWIERA cyfre 5
        bool found = false;
        int num = abs(i);
        while (num != 0) {
            if (num % 10 == 5) {
                found = true;
                break;
            }
            else {
                num /= 10;
            }
        }
        if (!found) {
            std::cout << i << " ";
            ++counter;
        };
    }
    printf("\nLiczby bez 5: %d", counter);
}

void zad07() {
    int x;
    std::cin >> x;
    if (x%2 == 0) printf("Parzysta");
}

void zad08() {
    // przestepny: podzielne przez 4
    // wyjatek: konczy sie na 00
    // wyjatek od wyjatku: podzielne przez 400
    int yr;
    std::cin >> yr;
    if ( (yr % 4 == 0 && yr % 100 != 0) || (yr % 100 == 0 && yr % 400 == 0) ) printf("Przestepny");
}
void zad09() {
    // <a1,a2>, <b1,b2>
    float a1,a2,b1,b2;
    std::cout << "a1: ";
    std::cin >> a1;
    std::cout << "a2: ";
    std::cin >> a2;
    std::cout << "b1: ";
    std::cin >> b1;
    std::cout << "b2: ";
    std::cin >> b2;
    // std::max, std::min
    // najmniejszy z poczatkow <= najwiekszy z koncow
    if (std::max(a1, b1) <= std::min(a2, b2)) {
        printf("Intersection: < %f ; %f >", std::max(a1, b1), std::min(a2, b2));
    }
    else printf("No intersection");
}

void zad12() {
    int n;
    while (true) {
        if(scanf("%1d", &n) != 1) {
            printf("\n");
            break;
        };
        printf("%d", n);
        // has to exit with ^C
    }
}

void zad14() {
    // tabliczka mnozenia
    const int Size = 11;
    const int Value_Width = 4;
    for(int i = 0; i < Size; ++i) {
        for(int j = 0; j < Size; ++j) {
            std::cout << std::setw(Value_Width) << i*j;
        }
        // w praktyce std::cout << "\n" dziala szybciej niz std::cout << std::endl;
        std::cout << std::endl;
    }
}

void zad15() {
    // tabliczka mnozenia
    const int Size = 11;
    const int Value_Width = 4;
    for(int i = 0; i < Size; ++i) {
        for(int j = 0; j < i+1; ++j) {
            std::cout << std::setw(Value_Width) << i*j;
        }
        // w praktyce std::cout << "\n" dziala szybciej niz std::cout << std::endl;
        std::cout << std::endl;
    }
}

void zad15_b() {
    // tabliczka mnozenia
    const int Size = 11;
    const int Value_Width = 4;
    for(int i = 0; i < Size-i; ++i) {
        for(int j = 0; j < Size; ++j) {
            std::cout << std::setw(Value_Width) << i*j;
        }
        // w praktyce std::cout << "\n" dziala szybciej niz std::cout << std::endl;
        std::cout << std::endl;
    }
}

int main() {
    zad15_b();
    return 0;
}
