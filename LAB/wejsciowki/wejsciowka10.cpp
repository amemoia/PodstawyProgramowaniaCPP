/*
Napisz dwie funkcje w języku C++ condition i action.
Funkcja condition powinna przyjąć wskaźnik typu void i zwrócić wartość logiczną.
Funkcja action powinna przyjmować dwa wskaźnik typu void i nic nie zwracać.
Funkcja condition ma sprawdzić,
czy dwie kolejne liczby całkowite w pamięci (rozpoczynając od podanego adresu) są sobie równe.
Funkcja action powinna obliczyć iloraz dwóch kolejnych liczb całkowitych w pamięci
rozpoczynając od adresu podanego w pierwszym argumencie
i zapisać wynik jako liczba zmiennoprzecinkowa pod adres przekazany w drugim argumencie.

Napisz funkcję f, która przyjmie tablicę liczb całkowitych, jej rozmiar,
tablicę wynikową liczb zmiennoprzecinkowych
oraz dwa wskaźniki na funkcje o nagłówkach takich jak condition i action.
Dla każdej pary elementów tablicy liczb całkowitych nie spełniających warunku condition
należy wywołać funkcję action, gdzie drugim adresem będzie odpowiednie pole w tablicy wynikowej.
Jeżeli condition jest spełniony, to należy wpisać 0.0f w odpowiedni element tablicy wynikowej.
Na koniec w programie po wywołaniu funkcji f wyświetl zawartość tablicy wynikowej.
*/
#include <iostream>

bool condition(const void* ptr) {
    int *val1 = (int*)ptr;
    int *val2 = (int*)ptr + 1;
    return (*val1 == *val2);
}
void action(const void* ptr1, const void* ptr2) {
    int *val1 = (int*)ptr1;
    int *val2 = (int*)ptr1 + 1;
    float div_result = (float)(*val1) / (float)(*val2);
    *(float*)ptr2 = div_result;
}
void f(int values[], int arrsize, float results[], bool (* condition)(const void *ptr), void (* action)(const void* ptr1, const void* ptr2)) {
    if (arrsize % 2 != 0) return;
    for (int i = 0; i < arrsize; i = i+2)
    {
        if (condition(&values[i])) {
            results[i/2] = 0.0f;
        }
        else {
            action(&values[i], &results[i/2]);
        }
    }
}

int main() {
    int values[] = {1, 2, 3, 4, 5, 5, 11, 12, 10, 10};
    float results[5] = {};

    f(values, 10, results, condition, action);

    for (int i = 0; i < 5; i++)
    {
        std::cout << results[i] << " ";
    }
    std::cout << std::endl;
}