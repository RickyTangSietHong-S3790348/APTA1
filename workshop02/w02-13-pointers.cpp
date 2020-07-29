#include <iostream>

#define ROWS 10
#define COLS 5

int main(void) {

    int x = 10;
    int y = -3;

    int* ptr = &x;
    int* qtr = &y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    std::cout << *ptr << std::endl;
    std::cout << *qtr << std::endl;

    // Addresses!!
    std::cout << ptr << std::endl;
    std::cout << qtr << std::endl;

    x = y;
    std::cout << *ptr << std::endl;
    std::cout << *qtr << std::endl;

    *qtr = -42;
    std::cout << *ptr << std::endl;
    std::cout << *qtr << std::endl;


    int** pptr = &ptr;
    int** qqtr = &qtr;

    // Memory address of a pointer ptr/qtr
    std::cout << pptr << std::endl;
    std::cout << qqtr << std::endl;

    // Memory address pf x/y
    std::cout << *pptr << std::endl;
    std::cout << *qqtr << std::endl;

    // Actual values x/y
    std::cout << **pptr << std::endl;
    std::cout << **qqtr << std::endl;

    // Pointer to no where?
    ptr = nullptr;
    // std::cout << *ptr << std::endl;

    return EXIT_SUCCESS;
}
