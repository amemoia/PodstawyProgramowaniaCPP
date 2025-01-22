/*
Napisz program w języku C++, który stworzy rastrowy plik graficzny.
Plik powinien być zapisany w formacie PPM (Wikipedia).
*/
#include <cstdio>
int main() {
    char color[3];
    const int dimx = 800;
    const int dimy = 800;

    FILE *file = nullptr;
    if ((file = fopen("xor.ppm", "w")) != NULL)
    {
        fprintf(file, "P6 %d %d 255\n", dimx, dimy);
        for (int i = 0; i < dimx; i++)
        {
            for (int j = 0; j < dimy; j++)
            {
                color[0] = i     % 255;
                color[1] = j     % 255;
                color[2] = (i*j) % 255;
                fwrite(color, sizeof(char), 3, file);
            }
            
        }
    }
    else {
        perror("Error");
    }
    fclose(file);
}