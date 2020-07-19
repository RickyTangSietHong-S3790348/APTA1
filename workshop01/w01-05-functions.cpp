
#include <iostream>

// Declare function first at the top
void foo();

int passing(int x);

int main (void) {

   int      i = 9;
   int retVal = 0;

   foo();
   retVal = passing(i);
   std::cout << "i: " << i << std::endl;
   std::cout << "retVal: " << retVal << std::endl;

   return EXIT_SUCCESS;
}

// Define function later
void foo() {
   std::cout << "Running the function foo" << std::endl;
}

int passing(int x) {
   ++x;
   return x;
}
