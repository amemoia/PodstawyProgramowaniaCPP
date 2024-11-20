/*
    Napisz funkcję w jeżyku C++, która przyjmuje w argumentach liczbę 4-bajtową całkowitą nieujemną word
    oraz cztery wskaźniki na 1-bajtowe liczby całkowitą nieujemne b0, b1, b2, b3.
    Funkcja ma wpisać w argumenty wskazywane wskaźnikami b0..b3 wartości kolejnych bajtów z liczby word.
    Zadanie zrealizuj za pomocą arytmetyki wskaźnikowej i odpowiedniego ich rzutowania.
    Przetestuj działanie tej funkcji.
*/

typedef unsigned int uint;
typedef unsigned char uchar;

void f(uint word, unsigned char *b0, uchar *b1, uchar *b2, uchar *b3) {
    // 0xFFFFFFFF
    // 1111 0000 0000 0000 0000 0000 0000
    // shift to fit byte into char: (>> 6*4)
    /* bit method idk untested
    *b0 = (word & 0xFF000000) >> 3*8;
    *b1 = (word & 0x00FF0000) >> 2*8;
    *b2 = (word & 0x0000FF00) >> 8;
    *b3 = (word & 0x000000FF);
    */
    *b0 = *( (uchar *)&word +0 );
    *b1 = *( (uchar *)&word +1 );
    *b2 = *( (uchar *)&word +2 );
    *b3 = *( (uchar *)&word +3 );
}
