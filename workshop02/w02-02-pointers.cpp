
#include <iostream>

int main (void) {

   int a = 1;
   int b = 2;
   int c = 3;

   std::cout << &a << " " << a << std::endl;
   std::cout << &b << " " << b <<  std::endl;
   std::cout << &c << " " << c <<  std::endl;

   int* ptr_a = &a;
   int* ptr_b = &b;
   int* ptr_c = &c;

   std::cout << std::endl;
   std::cout << ptr_a << std::endl;
   std::cout << ptr_b << std::endl;
   std::cout << ptr_c << std::endl;


   std::cout << std::endl;
   std::cout << *ptr_a << std::endl;
   std::cout << *ptr_b << std::endl;
   std::cout << *ptr_c << std::endl;

   std::cout << std::endl;
   a = 10;
   std::cout << *ptr_a << std::endl;

   std::cout << std::endl;
   *ptr_b = -42;
   std::cout << b << std::endl;


   ptr_c = ptr_a;
   *ptr_c = 20;
   std::cout << std::endl;
   std::cout << *ptr_a << std::endl;
   std::cout << *ptr_b << std::endl;
   std::cout << *ptr_c << std::endl;
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << c << std::endl;


   ptr_a = nullptr;
   *ptr_a = 10;

   return EXIT_SUCCESS;
}
