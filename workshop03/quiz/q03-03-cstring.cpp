
#include <iostream>

#define LENGTH 10

void modyifyArray(char* cstring);

int main (void) {

   char hello[] = "Hello World";

   std::cout << hello << std::endl;
   
   // Make second output just print "Hello"
   // hello[5] = '\0';
   modyifyArray(hello);
   std::cout << hello << std::endl;

 
   // int ints[LENGTH] = {};
   // std::cout << ints << std::endl;
   // std::cout << &ints[0] << std::endl;
 
   return EXIT_SUCCESS;
}

void modyifyArray(char* cstring) {
   cstring[5] = '\0';
}
