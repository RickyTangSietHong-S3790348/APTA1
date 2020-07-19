
#include <iostream>
#include <string>

#define LENGTH          10

// void printArray(char array[], int length);

int main (void) {

   std::string strclass = "this is a string \t-\t sort of";
   std::cout << "string: " << strclass << std::endl;
   strclass = strclass + " - COSC1076";
   std::cout << "string: " << strclass << std::endl;

   return EXIT_SUCCESS;
}

// void printArray(char array[], int length) {
//    for (int i = 0; i < length; ++i) {
//        std::cout << "string[" << i << "] = " << array[i] << std::endl;
//    }
// }
