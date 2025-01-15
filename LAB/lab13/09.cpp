/*
9. Napisz program w języku C++, który zdefiniuje typ złożony Person mający dwa pola:
liczbę całkowitą – age, napis – name.
Program powinien stworzyć obiekt tego typu, a następnie stworzyć jego głęboką kopię.
*/

#include <iostream>
#include <cstring>

struct Person { int age; char *name; };

int main() {
    const char *emil = "Emil";
    Person *person1 = new Person;
    person1->age = 20;
    person1->name = new char[32];
    strcpy(person1->name, emil);
    Person person2 = *person1;
    person2.name = new char[strlen(person1->name) + 1]();
    strcpy(person2.name, person1->name);
    std::cout << person2.age << " " << person2.name << std::endl;
    delete[] person1->name;
    delete person1;
    std::cout << person2.age << " " << person2.name << std::endl;
    delete[] person2.name;
}