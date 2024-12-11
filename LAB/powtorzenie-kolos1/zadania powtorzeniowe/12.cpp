/*
    Napisz program, który wczyta od użytkownika dodatnią liczbę całkowitą r
    i wyświetli na ekranie terminala koło zbudowane ze znaków ‘#’ o promieniu równym r
    (zgodnie z przykładem poniżej).
    Równanie koła ma postać: x^2+y^2 <= r^2.
    Do obliczenia pierwiastka kwadratowego użyj funkcji std::sqrt() z biblioteki <cmath>.
    PRZYKŁAD:
    IN: 3
    OUT:
        #
      #####
      #####
     #######
      #####
      #####
        #
*/
#include <cmath>
#include <iostream>

int main() {
    int r;
    std::cin >> r;
    std::cout << std::endl;
    int maxwidth = 2*r + 1;
    for (int row = 0; row < maxwidth; row++)
    {
        for (int column = 0; column < maxwidth; column++)
        {
            // apparently subtracting r shifts the center
            // so like if we're column 1 our x = -2
            // which is 2 to the left of our circle middle
            // likewise column 4 will be x = 1, making it one to the right
            // then we just throw that in the stupid circle equation to see if it should print
            int x = column - r;
            int y = row    - r;
            if (x*x + y*y <= r*r) std::cout << "#";
            else                  std::cout << " ";
        }
        std::cout << std::endl;
    }   
}