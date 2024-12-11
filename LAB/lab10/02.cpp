/*
    Napisz program w języku C++, który wczyta od użytkownika wymiary prostokątnego pola bitwy NxM,
    a następnie dla każdego pola dwie wartości całkowite A oraz D.
    Na każdym polu znajduje się działo: A definiuje jego moc ataku, zaś D jego obronę.
    Działa strzelają do siebie nawzajem,
    jeśli działo atakujące ma większą wartość ataku niż wartość defensywy przeciwnika,
    to wygrywa walkę i niszczy działo atakowane.
    W przeciwnym wypadku wygrywa działo broniące się, niszcząc działo atakujące.
    Program po wczytaniu pola bitwy powinien wczytać wartość nieujemnej zmiennej całkowitej C,
    a następnie C sekwencji danych:
    ax, ay, dx, dy,
    gdzie ax, ay to współrzędne działa atakującego,
    zaś dx, dy działa broniącego się,
    po każdej operacji z pola bitwy powinno zniknąć jedno działo.
    Na koniec program powinien wyświetlić stan pola bitwy w formie:

    0 X 0 0 0
    0 0 0 X 0
    X X 0 0 0

    gdzie X – oznacza działo zniszczone,
    a O – działo, które pozostało na polu bitwy.
    Użyj dynamicznej alokacji pamięci, rozwiązanie powinno być rozwiązaniem optymalnym.
    (Optymalne: pole bitwy powinno być spójnym obszarem pamięci.)

    Przykład:

    5 3 ->
    1 5 2 6 9 2
    1 5 7 1 2 2
    5 3 2 8 9 5
    6 6 8 2 4 1
    3 6 4 2 8 3
    3 -> number of attacks
    0 0 4 2 -> ATTACKER(0, 0) vs DEFENDER(4, 2)
    4 2 0 2
    1 1 2 1
*/

//  Battlefield[Attack][Defense][Alive?]
/*
    dynamic 2D array definition:

    int **arr = new int*[N];
    for(int i = 0; i < N; ++i) {
        arr[i] = new int[M];
    }
    arr[N][M] -> *(*(arr+1)+2)

    ISSUE: ARRAY WILL BE FRAGMENTED IN MEMORY

    same for 3D:

    int ***arr = new int**[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = new int*[M];
        for (int j = 0; j < M; ++j) {
            arr[i][j] = new int[X];
        }
    }
    arr[N][M][X] -> *(*(*(arr+1)+2))
*/

/*
    BETTER METHOD: Interpreting a 1D array as multi-D
    this will prevent fragmentation in memory

    int *arr = new int[N*M*Z]
    arr[i*M*Z + j*Z  + Z]
*/

typedef unsigned int uint;

#include <iostream>

void print_arr(int *arr, uint n, uint m) {
    for (uint i = 0; i < n; ++i) {
        for (uint j = 0; j < m; ++j) {
            //printf("%c ", arr[i][j][0] == -1 && arr[i][j][1] == -1 ? 'X' : '0');
            printf("%c ", arr[i*m*2 + j*2 + 0] == -1 && arr[i*m*2 + j*2] == -1 ? 'X' : '0');
        }
        printf("\n");
    }
}

void f(int *arr, uint ax, uint ay, uint dx, uint dy, uint n, uint m) {
    // if (arr[ax][ay][0] > arr[dx][dy][1]) arr[dx][dy][0] = arr[dx][dy][1] = -1;
    // else arr[ax][ay][0] = arr[ax][ay][1] = -1;
    uint a = ax * m * 2 + ay * 2;
    uint d = dx * m * 2 + dy * 2;
    if(arr[a] > arr[d + 1]) arr[d] = arr[d + 1] = -1;
    else arr[a] = arr[a + 1] = -1;
}

int main() {
    uint n, m, c, ax, ay, dx, dy;
    scanf("%u%u", &n, &m);

    //int ***battlefield = new int**[n];
    int *battlefield = new int[n*m*2];
    /*
    for (uint i = 0; i < n; ++i) {
        battlefield[i] = new int*[m];
        for (uint j = 0; j < m; ++j) {
            // new int[2] -> binary value whether ship is alive or not
            battlefield[i][j] = new int[2];
        }
    }
    */
    print_arr(battlefield, n, m);

    for (uint i = 0; i < n; ++i) {
        for (uint j = 0; j < m; ++j) {
            scanf("%d%d", &battlefield[i*m*2 + j*2 + 0], &battlefield[i*m*2 + j*2 + 1]);
        }
    }
    scanf("%u", &c);
    for (uint i = 0; i < c; ++i) {
        scanf("%u%u%u%u", &ax, &ay, &dx, &dy);
        f(battlefield, ax, ay, dx, dy, n, m);
    }
    // multidimensoional array method
    /*
    for (uint i = 0; i < n; ++i) {
         for (uint j = 0; j < m; ++j) {
             delete[] battlefield[i][j];
        }
        delete[] battlefield[i];
    }
    */
    delete[] battlefield;
}