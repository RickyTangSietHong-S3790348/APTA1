#include <iostream>

enum Colour {
   RED,
   ORANGE,
   YELLOW,
   GREEN,
   BLUE,
   INDIGO,
   VIOLET
};

int main(void) {

    Colour colour = RED;

    if (colour == RED) {
        std::cout << "it's red" << std::endl;
    }
    if (colour > ORANGE) {
        std::cout << "it's greater than orange" << std::endl;
    }

    std::cout << colour << std::endl;
    std::cout << ORANGE << std::endl;
    std::cout << VIOLET << std::endl;

    return EXIT_SUCCESS;
}
