/*
Dane są dwie tablice liczb zmiennoprzecinkowych o długościach: (1) 3*N oraz (2) N,
gdzie N jest liczbą naturalną. Zdefiniuj funkcję fun_arr,
która w parametrze przyjmie dwie tablice (o podanej wyżej specyfikacji)
oraz wskaźnik na pewną dodatkową funkcję fun_aux.
Funkcja fun_arr z każdych trzech sąsiadujących elementów
(o indeksach {3i, 3i+1, 3i+2}) z pierwszej tablicy ma obliczyć,
za pomocą fun_aux, pojedynczą wartość i wstawić ją do drugiej tablicy w element o indeksie i.
Funkcja pomocnicza fun_aux, dla trzech podanych liczb, ma zwracać wartość największą.
W funkcji głównej stwórz przykładowe dynamiczne tablice (1) i (2)
spełniające warunki z początku zadania
i wykorzystując funkcje fun_arr i fun_aux,
uzupełnij tablicę wyjściową (2).
Wypisz na ekranie jej wartości. Zadbaj o właściwe zarządzanie pamięcią dynamiczną.
Przykład:
IN:     [1.0,1.0,2.5,   2.0,1.0,-0.5,   -1.5,-3.0,-4.0,   0.0,0.0,0.0,0.0]
OUT: [2.5            2.0             -1.5              0.0]
*/
#include <iostream>

float fun_aux(float val1, float val2, float val3) {
    float largest;
    val1 > val2 ? ( val1 > val3 ? largest = val1 : largest = val3 ) : ( val2 > val3 ? largest = val2 : largest = val3 );
    return largest;
}

void fun_arr(float arr[], float results[], float (*fun_aux)(float, float, float)) {
    int results_size = sizeof(*results) / sizeof(results[1]);
    for (int i = 0; i < results_size; i++)
    {
        int arr_pos = i * 3;
        float largest = fun_aux(arr[arr_pos], arr[arr_pos + 1], arr[arr_pos + 2]);
        results[i] = largest;
    }
}

int main() {
    int N = 4;
    float *arr = new float[3*N]{1, 1, 2.5,    2, 1, -0.5,   -1.5, -3.0, -4.0,   0, 0, 0};
    float *results = new float[N];
    // expected out: {2.5, 2.0, -1.5, 0}
    fun_arr(arr, results, fun_aux);
    for (int i = 0; i < N; i++)
    {
        std::cout << results[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    delete[] results;

}