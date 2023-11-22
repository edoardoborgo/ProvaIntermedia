#include <iostream>
#include "../include/Book.h"

int main() {
    Book mybook("887-521-837-4","Una cosa divertente che non faro' mai piu'","David","Foster Wallace", Date(Year(2002), Date::Month::July, 12));
    std::cout << mybook << std::endl;

    Book mybook1("887-521-837-4","Una cosa divertente che non faro' mai piu'","David","Foster Wallace", Date(Year(2002), Date::Month::July, 12))
    return 0;
}
