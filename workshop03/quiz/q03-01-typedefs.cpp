#include <iostream>
#include <string>

#define LENGTH 10

typedef std::string String;

int main(void) {

    String output = "Hello World!";
    // char* output = "Hello World";

    std::cout << output << std::endl;

    return EXIT_SUCCESS;
}
