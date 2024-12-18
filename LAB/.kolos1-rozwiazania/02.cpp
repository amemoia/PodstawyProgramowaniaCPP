/*
    funkcja conv() z wzoru
*/

#include <iostream>

const int M = 4;
float f[M] = {2.0f, 4.0f, 1.0f, -3.0f};
float g[M] = {-4.0f, 3.0f, -1.0f, 2.0f};

void conv(float f[], float g[]) {
    float c[M] = {};
    for (int i = 0; i < M; i++)
    {
        float cval = 0;
        for (int j = 0; j < M; j++)
        {
            int temp = i - j;
            if (temp < 0) temp = 0;
            cval += f[j] * g[temp];
        }
        c[i] = cval;
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
}
int main () {
    conv(f, g);
}