/*
2. Napisz program w języku C++, który wczyta od użytkownika liczbę całkowitą.
Następnie program powinien wyświetlić:
- Left, gdy użytkownik wprowadził 0;
- Right, gdy użytkownik wprowadził 1;
- Up, gdy użytkownik wprowadził 2;
- Down, gdy użytkownik wprowadził 3;
- Anywhere dla każdej innej wartości wprowadzonej przez użytkownika.
*/
#include <iostream>

// enum automatycznie przypisuje wartości rosnąco
enum Direction {LEFT=0, RIGHT=1, UP=2, DOWN=3};

int main() {
    int input;
    std::cin >> input;
    input = (Direction)input;
    switch (input)
    {
    case LEFT:
        std::cout << "Left";
        break;
    case RIGHT:
        std::cout << "Right";
        break;
    case UP:
        std::cout << "Up";
        break;
    case DOWN:
        std::cout << "Down";
        break;
    default:
        std::cout << "Anywhere";
    }
    return 0;
}