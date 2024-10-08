#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

void zad1() {
    cout << "Zad 1) Hello World!" << endl;
}
void zad2() {
    int x = 1;
    int y = 2;
    cout << "Zad 2) x + y = " << x+y << endl;
}
void zad3() {
    int x = 17;
    printf("Zad 3) dec: %d, oct: %o, hex: %x", x,x,x);
}
void zad4() {
    int x;
    int y;
    cout << "Zad 4)" << endl
              << "Zmienna x: ";
    cin >> x;
    cout << "Zmienna y: ";
    cin >> y;
    cout << "Suma zmiennych: " << x+y << endl;
}
void zad5() {
    int a = 6;
    int b = 8;
    int p;
    p = a*b;
    cout << "Zad 5) Pole prostokąta: " << a << "*" << b << "=" << a*b << endl;
}
void zad6() {
    float x;
    float y;
    cout << "Zad 6) Zmienna float x: ";
    scanf("%f", &x);
    cout << "Zmienna float y: ";
    scanf("%f", &y);
    cout << "Iloczyn x*y = " << x*y << endl;
}
void zad7() {
    int x, y, z;
    cout << "Zad 7) Wpisz trzy zmienne:" << endl;
    scanf("%d%d%d", &x, &y, &z);
    printf("Wpisane zmienne: %d, %d, %d \n", x,y,z);
}
// do zad 8
int a(int n) {
    int a1 = -3;
    int r = 3;
    return (a1 + (n-1)*r);
}
void zad8() {
    /*
        Dwunasty wyraz ciągu arytmetycznego (an), określonego dla n >= 1, jest równy 30,
        a suma jego dwunastu początkowych wyrazów jest równa 162.
        Napisz program, który obliczy pierwszy wyraz tego ciągu.
     
        Rozwiązanie ciągu:
        S12 = 162
        a(12) = 30
        a(n) = a1 + (n-1)r
        a(12) = a1 + 11r
        S(n) = [a1 + a(n)] / 2 * n
        162 = (a1+30) / 2 * 12
        162 = (a1 + 30) * 6
        27 = a1 + 30
        a1 = -3
        30 = -3 + 11r
        11r = 33
        r = 3
     */

    int sprawdzenie_rozw = a(12);
    int wynik = a(1);
    std::cout << "Zad 8) a(12) = " << sprawdzenie_rozw << std::endl
              << "a(1) = " << wynik << std::endl;
}
void zad9() {
    /*
        9. Zmień program tak by potrafił obliczyć pierwszy wyraz ciągu dla danych wprowadzonych przez użytkownika
        tj. wartość K, K-ty wyraz ciągu arytmetycznego, suma K-tych początkowych wyrazów.
        Wszystkie wartości poza K powinny być zmiennoprzecinkowe.
     */
    float k1 = -3.f;
    float r = 3.f;
    int k;
    std::cout << "Zad 9) Wpisz wartość K dla ciągu: ";
    std::cin >> k;
    
    int wyraz_k = (k1 + (k-1)*r);
    int suma_k = (k1+wyraz_k)/2*k;
    
    std::cout << "Wartość K: " << k << std::endl
    << "K-ty wyraz ciągu: " << wyraz_k << std::endl
    << "Suma K-tych początkowych wyrazów: " << suma_k << std::endl;
}

void zad10() {
    int hr, min, tmp;
    scanf("%d:%d", &hr, &min);
    tmp = min+hr*60;
    scanf("%d:%d", &hr, &min);
    tmp -= min+hr*60;
    printf("Zad 10) Różnica w minutach: %d\n", abs(tmp));
}
void zad11() {
   printf("Zad 11) %e\n", 10.f / (90.f * 89.f));
}
void zad12() {
    /*
        Napisz program w języku C++ wypisujący na ekranie napis "\n \t"
        oraz napis reprezentujący ścieżkę dostępu do przykładowego katalogu linuksowego "/usr/bin/xorg/"
        oraz windowsowego "C:\Windows\System".
     */
    std::cout << "Zad 12) \\n \\t" << std::endl << "/usr/bin/xorg" << std::endl << "C:\\Windows\\System" << std::endl;
}
void zad13() {
    /*
        Podczas przesyłu danych za pomocą połączenia sieciowego,
        dołączane są dodatkowe informacje pozwalające na weryfikację poprawności przesłanych danych.
        Załóżmy, że do każdego bajtu dodawane są dwa bity kontrolne.
        Napisz program w języku C++, który przyjmie ze standardowego wejścia rozmiar pliku w megabajtach
        oraz przepustowość łącza użytego do transmisji w megabitach na sekundę.
        Program powinien wyświetlić po ilu sekundach plik zostanie przesłany, przy założeniu wykorzystania pełnej przepustowości.
     */
    int bity_kontrolne = 2;
    // 1B = 8b
    float rozmiar_MB;
    std::cout << "Zad 13) Wpisz rozmiar pliku w MB: ";
    std::cin >> rozmiar_MB;
    float przepustowosc;
    std::cout << "Wpisz przepustowość łącza w Mb/s: ";
    std::cin >> przepustowosc;
    // 1MB = 1 000 000B = 8 000 000b
    // 1Mb  = 1 000 000b
    float rzeczywisty_rozmiar_b = rozmiar_MB * 8000000 + rozmiar_MB * bity_kontrolne;
    float przepustowosc_b = przepustowosc * 1000000;
    float czas_przesylu = rzeczywisty_rozmiar_b / przepustowosc_b;
    std::cout << "Czas przesyłu danych: " << czas_przesylu << "s" << std::endl;
}

void zad14() {
    /*
        Prawo Amdahla określa przyspieszenie działania równoległej implementacji algorytmu
        w stosunku do szeregowej (wykonywanej w jednym wątku).
        Wyraża się wzorem: 1 / ((1 - P) + P/S),
        gdzie P oznacza udział obliczeń, które mogą być zrównoleglone,
        a S określa przyspieszenie tych obliczeń – zazwyczaj odpowiada liczbie wątków.
        Napisz program w języku C++, który przyjmie w sekundach czas wykonania pewnego algorytmu za pomocą jednego wątku,
        procentową część operacji, które mogą zostać zrównoleglone oraz liczbę wątków,
        które będą przetwarzać algorytm równolegle.
        Program powinien wyświetlić liczbę sekund, którą zajmie wykonanie algorytmu równolegle.
     */
    int wykonanie_alg_1t;
    std::cout << "Zad 14) Czas wykonania algorytmu przez jeden wątek w sekundach: ";
    std::cin >> wykonanie_alg_1t;
    int pkt_proc_zrownoleglone;
    std::cout << "Procentowa część operacji, które mogą zostać zrównoleglone: ";
    scanf("%d%%", &pkt_proc_zrownoleglone);
    int threads;
    std::cout << "Liczba wątków przetwarzających algorytm równolegle: ";
    std::cin >> threads;
    
    float czas_oryg = wykonanie_alg_1t;
    float S = threads;
    float P = pkt_proc_zrownoleglone/100.f;
    float amdahl = 1.f / ((1.f - P) + (P/S));
    std::cout << "Amdahl: " << amdahl << std::endl;
    std::cout << "Czas wykonania algorytmu równolegle: " << czas_oryg/amdahl << " sekund" << std::endl;
}

void zad15() {
    /*
        Zmodyfikuj poprzednie zadanie tak,
        aby przyjmował czas wykonania algorytmu w formacie hh:mm:ss.
        W takim samym formacie powinien przyjąć godzinę rozpoczęcia działania.
        Program powinien wyświetlić godzinę zakończenia działania w wariancie równoległym.
     */
    int wykonanie_hh;
    int wykonanie_mm;
    int wykonanie_ss;
    std::cout << "Zad 14) Podaj czas wykonania algorytmu w formacie hh:mm:ss: ";
    scanf("%d:%d:%d", &wykonanie_hh, &wykonanie_mm, &wykonanie_ss);
    int rozp_hh;
    int rozp_mm;
    int rozp_ss;
    std::cout << "Podaj godzinę rozpoczęcia działania w formacie hh:mm:ss: ";
    scanf("%d:%d:%d", &rozp_hh, &rozp_mm, &rozp_ss);
    int pkt_proc_zrownoleglone;
    std::cout << "Procentowa część operacji, które mogą zostać zrównoleglone: ";
    scanf("%d%%", &pkt_proc_zrownoleglone);
    int threads;
    std::cout << "Liczba wątków przetwarzających algorytm równolegle: ";
    std::cin >> threads;
    
    float wykonanie_sekundy = wykonanie_ss + 60*wykonanie_mm + 3600*wykonanie_hh;
    std::cout << "Stary czas wykonania: " << wykonanie_sekundy << "s" << std::endl;
    float S = threads;
    float P = pkt_proc_zrownoleglone/100.f;
    float amdahl = 1.f / ((1.f - P) + (P/S));
    std::cout << "Amdahl: " << amdahl << std::endl;
    float nowy_czas = wykonanie_sekundy/amdahl;
    float nowy_czas_temp = nowy_czas + (rozp_ss + rozp_mm*60 + rozp_hh*3600);
    std::cout << "Nowy czas wykonania: " << nowy_czas_temp << "s" << std::endl;
    int nowy_hh = nowy_czas_temp / 3600;
    nowy_czas_temp -= nowy_hh * 3600;
    int nowy_mm = nowy_czas_temp / 60;
    nowy_czas_temp -= nowy_mm * 60;
    int nowy_ss = nowy_czas_temp;

    printf("Godzina zakończenia działania: %d:%d:%d \n", nowy_hh, nowy_mm, nowy_ss);
}

void zad16() {
    /*
        Współczesne dyski twarde dzielą się na sektory,
        które są podstawową jednostką wymiany danych. Zazwyczaj sektor ma rozmiar 512 bajtów.
        Odczytywany i zapisywany na dysku jest zawsze cały sektor.
        Standardem adresowania tych sektorów jest LBA (ang. logical block addressing).
        Dane na talerzowych dyskach twardych adresowane są fizycznie za pomocą trzech parametrów,
        cylindra C, głowicy H (ang. head) i ścieżki S (ang. track).
        Każdy dysk posiada określoną liczbę głowic na cylinder HPC i liczbę sektorów na ścieżkę SPT.
        Adres logiczny określa się za pomocą wzoru: A = (C × HPC + H) × SPT + (S − 1).
        Napisz program w języku C++, który pobierze ze standardowego wejścia wartości:
        HPC, SPT, C, H i S, a następnie wyświetli adres logiczny za pomocą liczby szesnastkowej.
     */
    //int sektor = 512;
    int C, H, S, HPC, SPT;
    std::cout << "Zad 16) HPC (liczba głowic na cylinder): ";
    std::cin >> HPC;
    std::cout << "SPT (liczba sektorów na ścieżkę): ";
    std::cin >> SPT;
    std::cout << "C (cylinder): ";
    std::cin >> C;
    std::cout << "H (głowica): ";
    std::cin >> H;
    std::cout << "S (ścieżka): ";
    std::cin >> S;
    int A = (C * HPC + H) * SPT + (S - 1);
    printf("Adres logiczny: 0x%x \n", A);
    // adres: A = (C * HPC + H) * SPT + (S - 1)
}

void zad17() {
    /*
        Posiadając informacje z poprzedniego zadania, napisz program w języku C++,
        który otrzyma ze standardowego wejścia adres logiczny w postaci liczby szesnastkowej
        oraz dziesiątkowe wartości HPC, SPT.
        Program powinien wyświetlić wartości C, H, S za pomocą liczb dziesiątkowych.
     */
    
    // rozwiązanie z ConvNets
    // long = 32 bit, long long = 64 bit
    long long A;
    int HPC, SPT, S, H, C;

    std::cin >> std::hex >> A >> std::dec >> HPC >> SPT;
    std::cout << A << std::endl;

    S = (A % SPT) + 1;
    A /= SPT;
    H = A % HPC;
    C = A / HPC;

    std::cout << "Wartości C, H, S: " << C << ' ' << H << ' ' << S << '\n';
}

int main(){

    zad16();
    return 0;
}

