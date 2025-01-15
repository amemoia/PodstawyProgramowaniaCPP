/*
Radar morski na statku to prawdopodobnie najczęściej używany sprzęt elektroniczny podczas nawigacji.
To doskonałe narzędzie do wykrywania obiektów wokół nas.
Niestety jesteśmy tak bardzo uzależnieni od radaru,
że czasami używamy go częściej niż własnych oczu do obserwacji wokół.
Jednakże inna sytuacja miała miejsce,
gdy pewien marynarz odczytywał dane z notatek pozostawionych na pokładzie swojego statku.
W notatkach kapitan pokładu zapisał położenia N obiektów na morzu
za pomocą współrzędnych biegunowych w następujący sposób:

R1 F1 R2 F2 ... Rn Fn
gdzie R to promień wodzący obiektu (odległość),
zaś F to amplituda punktu (wartość kątu skierowanego w radianach).

Na kolejnej kartce zapisane było N nazw własnych,
które prawdopodobnie dotyczyły zbliżających się okrętów:
Nazwa1 Nazwa2 ... Nazwan

Zaimplementuj funkcję,
która posortuje dane przedstawione na obu tych notatkach tak,
aby przedstawiła nazwy okrętów w kolejności od najmniej do najbardziej odległego od statku naszego bohatera,
który znajduje się w punkcie (0, 0). W sytuacji, gdy oba obiekty są tak samo odległe 
należy wybrać ten o mniejszej amplitudzie.

Napisz program w języku C++, który przetestuje działanie tej funkcji
i wyświetli nazwy zbliżających się okrętów w odpowiedniej kolejności.

Uwagi: R i F mogą być liczbami rzeczywistymi, zaś nazwy okrętów nie są dłuższe niż 99 znakowe słowa.
W zadaniu nie można używać struktur i klas.

Przykład:
input:

 [1.2 6.1 1.2 1.1 5.4 3.1]
 [Alfa Omega Sigma]

output:
 Omega Alfa Sigma
*/

#include <iostream>
#include <algorithm>

struct Ship {
    float r, f; 
    char name[99];
};

bool compare(const Ship &s1, const Ship &s2) {
    return s1.r < s2.r or (s1.r == s2.r and s1.f < s2.f);
}

bool compare2(float r1, float f1, float r2, float f2) {
    return (r1 < r2) or (r1 == r2 and f1 < f2);
}

void sort_ships(float coords[], char names[][32], int n) {
    for (int i = 0; i < n-2; i+=2)
    {
        for (int j = 0; j < n - i - 2; j+=2)
        {
            if ( compare2( coords[j], coords[j+1], coords[j+2], coords[j+3] ) ) {
                std::swap( coords[j],   coords[j+2]  );
                std::swap( coords[j+1], coords[j+3]  );
                std::swap(  names[j/2],  names[j/2+1]);
            }
        }
    }
}

int main() {
    // Rozwiazanie z struct
    const int N = 3;
    Ship ships[N] = {
        {1.2, 6.1, "Alfa"},
        {1.2, 1.1, "Omega"},
        {5.4, 3.1, "Sigma"}
    };
    std::sort(ships, ships+N, compare);
    for (int i = 0; i < N; i++)
    {
        std::cout << ships[i].name << " ";
    }
    std::cout << std::endl;

    //
    float ships_coords[2 * N] = {1.2, 6.1, 1.2, 1.1, 5.4, 3.1};
    char ships_names[N][32] = {"Alfa", "Omega", "Sigma"};
    sort_ships(ships_coords, ships_names, N);
    for (int i = 0; i < N; i++)
    {
        std::cout << ships_names[i] << " ";
    }
    std::cout << std::endl;
}