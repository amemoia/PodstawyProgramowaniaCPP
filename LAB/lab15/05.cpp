/*
5. Napisz program w języku C++, który stworzy rastrowy plik graficzny w skali szarości.
Plik powinien być zapisany w formacie PPM (Wikipedia).
*/
#include <cstdio>
int main() {
    FILE *file = nullptr;
    if ((file = fopen("xor.ppm", "w")) != NULL)
    {
        fprintf(file, "P2 256 256 255\n");
        for (int i = 0; i < 256; i++)
        {
            for (int j = 0; j < 256; j++)
            {
                fprintf(file, "%d ", (i ^ j)%256);
            }
            fprintf(file, "\n");
        }
        

    } else {
        perror("Error");
    }
    
}