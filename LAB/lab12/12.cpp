/*
    Napisz dwie funkcje w języku C++ condition i action.
    Funkcja condition powinna przyjąć liczbę całkowitą i zwrócić wartość logiczną.
    Funkcja action powinna przyjmować referencję na liczbę całkowitą i nic nie zwracać.
    Funkcja condition ma sprawdzać, czy w liczbie powtarza się którakolwiek cyfra.
    Funkcja action powinna odwrócić kolejność cyfr w tej liczbie.
    Napisz funkcję modify_array, która przyjmie tablicę liczb całkowitych, 
    jej rozmiar oraz dwa wskaźniki na funkcje o nagłówkach takich jak condition i action.
    Dla każdego elementu tablicy spełniającego warunek condition należy wywołać funkcję action.
*/
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <iostream>

bool condition(int x) {
    int tmp[10] = {};
    do {
        ++tmp[x % 10];
        if (tmp[x%10] > 1) return true;
    } while (x/=10);
    return false;
}
void action(int &x) {
    int result = 0;
    do {
        result *= 10;
        result += x % 10;
    } while (x /= 10);
    x = result;
}

void modify_array(int arr[], int n, bool (*cond)(int), void (*act)(int &)) {
    for (int i = 0; i < n; i++)
    {
        if (cond(arr[i])) act(arr[i]);
    }
}

void print_elem(int x) {std::cout << x << " ";}
int main() {
    int arr[] = {124, 403, 221, 727, 122};
    modify_array(arr, 5, condition, action);
    std::for_each(arr, arr+5, print_elem);
}