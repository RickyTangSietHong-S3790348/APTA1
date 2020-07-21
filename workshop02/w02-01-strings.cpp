
#include <iostream>
#include <string>

#define LENGTH          10

// void printArray(char array[], int length);

int main (void) {

   std::string strclass = "this is a string \t-\t sort of";
   std::cout << "string: " << strclass << std::endl;
   // strclass = strclass + " - COSC1076";
   std::cout << "string length: " << strclass.length() << std::endl;
   strclass.append(" - COSC1076");
   std::cout << "string: " << strclass << std::endl;

   std::cout << "string length: " << strclass.length() << std::endl;

   strclass.at(10) = 'z';
   std::cout << "string: " << strclass << std::endl;


   // C-Style String
   std::cout << std::endl;
   std::cout << "** Using C-Style String" << std::endl;
   char cString[LENGTH] = "hello";
   std::cout << cString << std::endl;
   // for (int i = 0; i < LENGTH && cString[i] != '\0'; ++i) {
   //    std::cout << cString[i] << std::endl;
   // }

   return EXIT_SUCCESS;
}

// void printArray(char array[], int length) {
//    for (int i = 0; i < length; ++i) {
//        std::cout << "string[" << i << "] = " << array[i] << std::endl;
//    }
// }
