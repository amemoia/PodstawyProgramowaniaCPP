/*
    powtórzyć pp-7 zad 9, 10, 11, 13
*/

// zad 14 do kolosa
typedef unsigned char uchar;
typedef unsigned int uint;

uchar f(uchar v, int b, bool f) {
    uint mask = 0b00001111;
    if (f) return ((v & mask)^mask)^(1 << b);
    else return (v & mask)^(1 << b);
}

/*
    Napisz funkcję w języku C++, która przyjmuje jako argumenty wskaźniki do dwóch zmiennych typu int.
    Funkcja powinna zwrócić wskaźnik do mniejszej wartości z liczb wskazywanych przez argumenty,
    jeśli argumenty mają taką samą wartość funkcja powinna zwracać wskaźnik na pierwszy argument.
*/

int *f1(int *a, int *b) {
    return (*a <= *b) ? a : b;
}
