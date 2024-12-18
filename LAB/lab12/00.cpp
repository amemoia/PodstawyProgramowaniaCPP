/*
    wczytac 3, pozniej n elementorw tablicy wielowymiarowej:
    n m k l
    wypelnic losowymi od 0 do 100 (rand % 101)

    pozniej zwrocic wskaznik z najmniejsza wartoscia w tablicy
*/
#include <cstdlib>
#include <iostream>

void printArr(int *arr, int len) {
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int** f(int **arr, int *sizes, int n){
    int global_min = INT_MAX;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            if(global_min > arr[i][j]) global_min = arr[i][j], index = i;
        }
    }
    return arr + index;
}

int main() {
    int n,m;
    std::cin >> n;
    int *sizes = new int[n];
    int **arr =  new int*[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> sizes[i];
        arr[i] = new int[sizes[i]];
        for (int j = 0; j < sizes[i]; j++)
        {
            arr[i][j] = rand() % 101;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sizes[i]; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    int** result = f(arr, sizes, n);
    int index = result - arr;
    printArr(*result, sizes[index]);
    for (int i = 0; i < n; i++) delete[] arr[n];    
    delete[] arr;
    delete[] sizes;
}