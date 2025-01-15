/*
    3. Napisz program w języku C++, który będzie symulował nadawanie praw dostępu plików tj.
    R – readable, W – writable, X – executable.
*/
#include <iostream>

enum Permissions {R = 4, W = 2, X = 1};


void check_perms(int perms) {
    if (perms & R) std::cout << "Readable" << std::endl;
    if (perms & W) std::cout << "Writable" << std::endl;
    if (perms & X) std::cout << "Executable" << std::endl;
}

int main() {
    int perms = R + X;
    check_perms(perms);
}