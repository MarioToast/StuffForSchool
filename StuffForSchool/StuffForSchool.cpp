#include <iostream>

int main()
{
    char option = ' ';
    do {
        std::cout << "Pick A, B or C.\n";
        std::cin >> option;

        switch (option) {
        case 'A': case 'a':
            std::cout << "A for Awesome!\n";
            break;
        case 'B': case 'b':
            std::cout << "B for Badass!\n";
            break;
        case 'C': case 'c':
            std::cout << "C for Cool!\n";
            break;

        default:
            std::cout << "Oy! Wrong input!\n";
            break;
        }
    } while (true);
}