
#include <iostream>

void swap(int& y, int& z);

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
   std::cout << *ptr_a << std::endl;
   std::cout << *ptr_b << std::endl;
   std::cout << *ptr_c << std::endl;

   int& ref_a = a;
   int& ref_b = b;
   int& ref_c = c;
   ++ref_a;
   --ref_b;

   std::cout << std::endl;
   std::cout << "** References" << std::endl;
   std::cout << ref_a << std::endl;
   std::cout << ref_b << std::endl;
   std::cout << ref_c << std::endl;
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << c << std::endl;

   // Swap
   int i = 10;
   int j = 42;
   swap(i, j);
   std::cout << std::endl;
   std::cout << "i: " << i << std::endl;
   std::cout << "j: " << j << std::endl;


   // int* ptr = nullptr;
   // int& ref = ?;

   return EXIT_SUCCESS;
}

void swap(int& y, int& z) {
   int tmp = y;
   y = z;
   z = tmp;
}
