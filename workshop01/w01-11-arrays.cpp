
#include <iostream>

#define LENGTH          10
#define ROWS            10
#define COLS            5

void printArray(int array[], int length);

int main (void) {


   // printArray(intarray, LENGTH);

   return EXIT_SUCCESS;
}

void printArray(int array[], int length) {
   for (int i = 0; i < length; ++i) {
      std::cout << array[i] << std::endl;
   }
}
