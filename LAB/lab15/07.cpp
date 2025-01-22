/*
Napisz program w języku C++,
który odczyta rastrowy plik graficzny stworzony w poprzednim zadaniu i rozjaśni go o 100.
*/
#include <cstdio>

int main() {
    int brightness = 100;
    FILE *file = nullptr;
    if ((file = fopen("xor.ppm", "r+b")) != NULL)
    {
        unsigned int dimx, dimy;
        fscanf(file, "P6 %d %d 255\n", &dimx, &dimy);
        fpos_t bin_start_pos;
        fgetpos(file, &bin_start_pos);
        unsigned char *buffer = new unsigned char[dimx * dimy * 3]();
        fread(buffer, 3, dimx*dimy, file);
        for (int i = 0; i < dimx*dimy*3; i++)
        {
            buffer[i] = buffer[i] + brightness;
            if (buffer[i] > (unsigned char)255) buffer[i] = (unsigned char)255;
        }
        fsetpos(file, &bin_start_pos);
        fwrite(buffer, 3, dimx*dimy, file);
        fclose(file);
        delete[] buffer;

    } else {
        perror("Error");
    }
    
}