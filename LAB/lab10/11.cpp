/*
    Napisz funkcję w języku C++, która przyjmie tablicę napisów (wskaźników na znaki),
    z których część ma wartość nullptr. Jeżeli taka wartość się pojawi, funkcja powinna:
    (1) dynamicznie utworzyć napis,
    (2) przepisać tam napis z poprzedniego wiersza pomijając co drugi znak,
    (3) przypisać powstały napis do komórki tablicy wskaźników.
    Rozmiar utworzonego napisu powinien być optymalny.
    Zakładamy, że pierwsza komórka tablicy nie zawiera nullptr.
*/

#include <iostream>

int strlen(char str[]) {
    int count = 0;
    while (str[count] != '\0') count++;
    return count;
}

void parse_arr(char *arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == nullptr) {
            int size = (int)(strlen(arr[i-1])/2 + 1);
            arr[i] = new char[size];
            for (int j = 0; j < arr[i-1][j]; j+=2) arr[i][j / 2] = arr[i - 1][j];
            arr[i][size] = '\0';
        }
    }
    
}
void print_arr(char *arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
    }  
}

int main() {
    const int n = 4;
    char *arr[n] = {"Ala ma kota", nullptr, "test2", nullptr};
    parse_arr(arr, n);
    print_arr(arr, n);
}