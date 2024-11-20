#include <iostream>
using namespace std;

int main() {
    unsigned char arr[10] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 0};
    // unsigned short *ptr = arr + 2; // gives conversion type error
    unsigned short *ptr = (unsigned short *)&arr[2];

    cout << (unsigned short *)arr << " " << (unsigned short *)ptr << " " << arr[0] << " " << arr[2] << " " << *ptr << endl;

    *ptr = 0xFFFF;
    // 100, 101, 255, 255, 104, 105, ...
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
