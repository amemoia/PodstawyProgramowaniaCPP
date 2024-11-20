/*
big wejsciowka
Napisz program w języku C++, który utworzy dwie tablice liczb całkowitych n- i m-elementową. Rozmiary n i m zdefiniuj w kodzie z użyciem stałych. Zapełnij te tablice pseudolosowymi liczbami całkowitymi z przedziału obustronnie domkniętego <a;b>, który wczytasz od użytkownika w formacie "<a;b>". Następnie utwórz tablicę o rozmiarze n + m i napisz funkcję, która zapisze w jej n początkowych komórkach zawartość tablicy n-elementowej, a w pozostałych zawartość tablicy m-elementowej. Następnie napisz funkcję, która zmodyfikuje zawartość tablicy o rozmiarze n + m tak, aby liczby parzyste znalazły się w początkowej, a liczby nieparzyste w końcowej części tablicy. Kolejność liczb w ramach grupy parzystych i nieparzystych jest dowolna. Na koniec wyświetl wszystkie tablice w celu porównania wyników. Do rozwiązania zadania możesz użyć dowolnej liczby funkcji pomocniczych. Dodatkowo można założyć, że wartości a i b są mniejsze niż RAND_MAX.

PRZYKŁADOWE DANE
WE:
[1 2 3 4]
[9 8 7]
WY:
[2 4 8 1 3 7 9]

*/
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <utility>

int randRange(int min, int max) {
    return min + rand() % (max - min + 1);
}

void fill_arr(int arr[], int n, int min, int max) {
    for (int i = 0; i < n; ++i) {
        arr[i] = randRange(min, max);
    }
}

void join_arr(int arr_nm[], int arr_n[], int n, int arr_m[], int m) {
    for (int i = 0; i < n; ++i) arr_nm[i] = arr_n[i];
    for (int j = 0; j < m; ++j) arr_nm[j+n] = arr_m[j];
}

void rearrange_arr(int arr[], int n) {
    int even_index = 0, odd_index = n-1;
    while(even_index < odd_index) {
        while (!(arr[even_index] % 2) && even_index < odd_index) even_index++;
        while (arr[odd_index] % 2 && even_index < odd_index) odd_index--;
        if (even_index < odd_index) std::swap(arr[even_index], arr[odd_index]);
    }
}

void print_arr(int arr[], int n) {
    for(int i=0; i < n; ++i) printf("%d ", arr[i]);
}

int main() {
    srand(time(NULL));
    const int n = 4, m = 6;
    int arr_n[n], arr_m[m], arr_nm[n+m], min, max;
    scanf("<%d;%d>", &min, &max);
    fill_arr(arr_n, n, min, max);
    fill_arr(arr_m, m, min, max);
    join_arr(arr_nm, arr_n, n, arr_m, m);
    rearrange_arr(arr_nm, n+m);
}
