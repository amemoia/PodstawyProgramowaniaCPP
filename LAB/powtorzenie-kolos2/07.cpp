/*
Napisz funkcję search_string(), która przyjmie tablicę napisów,
jej rozmiar oraz wskaźnik na funkcję pf odpowiedniej postaci.
Funkcja search_string() powinna zwrócić wskaźnik na napis,
dla którego funkcja pf zwróci największą wartość.
Zdefiniuj funkcję search_string() tak,
aby jako funkcja pf mogła być wywołana funkcja biblioteczna strpbrk z <cstring>,
której jako drugi argument zostanie przekazany napis złożony z samogłosek.
*/

#include <cstring>

char* pf(char* str) {
    return strpbrk(str, "aeiouAEIOU");
}

char* search_string(char* str[], int str_size, char (*pf)(const char*)) {
    char* max_string = nullptr;
    int   max_value  = 0;
    for (int i = 0; i < str_size; i++)
    {
        char* result = pf(str[i]);
        if (result != nullptr) {
            int value = result - str[i];
            if (value > max_value) {
                max_value = value;
                max_string = str[i];
            }
        }
    }
    
}