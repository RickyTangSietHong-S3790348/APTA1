#include <iostream>

int main (void) {

   // Output
   int      i = 10;
   float    f = 2.2356472f;
   double   d = 3.28918734;
   char     c = 'a';

   std::cout << i << " " << f << std::endl;
   std::cout << d << " " << c << std::endl;

   // Input
   // std::cin >> i;
   // std::cin >> f;
   // std::cout << i << " " << f << std::endl;
   
   // while (!std::cin.eof()) {
   //    std::cin >> i;
   //    std::cout << "int: " << i << std::endl;
   // }

   return EXIT_SUCCESS;
}
