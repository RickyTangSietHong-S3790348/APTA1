#include <iostream>
#include <string>

/**
 * Topics:
 * 
 * 1. Revision:
 *  - Reading/Writing (quiz question)
 *  - Functions (quiz question)
 *  - Bonus quiz question
 * 2. Arrays
 *  - 1D Array
 *  - 2D Array
 * 3. Classes:
 *  - Declaration (all one file for now)
 *  - Definition (all one file for now)
 *  - Constructor
 *  - Calling methods
 * 4. Pointers & Memory
 *  - Computer Memory Layout
 *  - Variables
 *  - Memory address
 *  - Pointer
 *   - Referencing
 *   - De-referencing
 *   - nullptr
 *  - Pass-by-reference
 *  - References
 * 5. (if time) Classes:
 *  - Pass-by-reference with pointer
 *  - De-reference notation (->)
 */

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

// #define RED    'r'
// #define ORANGE 'o'
// #define YELLOW 'y'
// #define GREEN  'g'
// #define BLUE   'b'
// #define INDIGO 'i'
// #define VIOLET 'v'

#define NUMBER_CARDS_TO_READ 5

void printColourAsString(int colour);

int main(void) {
   int number = 7;
   int colour = RED;
   
   // Read a set number of cards from the user
   // for (int i = 0; i < NUMBER_CARDS_TO_READ; ++i) {

   // Read until EOF
   while(!std::cin.eof()) {
      // Read the card value
      std::cin >> number;
      std::cin >> colour;

      // Print out "natural version" of the card
      std::cout << "Red7 Card - read from the user" << std::endl;
      printColourAsString(colour);
      std::cout << "\tnumber: " << number << std::endl;
   }

   return EXIT_SUCCESS;
}

void printColourAsString(int colour) {
   // Define some colours as string
   std::string red = "Red";
   std::string orange = "Orange";
   std::string yellow = "Yellow";
   std::string green = "Green";
   std::string blue = "Blue";
   std::string indigo = "Indigo";
   std::string violet = "Violet";
   std::string unknown = "UNKNOWN";

   std::cout << "\tcolour: ";
   if (colour == RED) {
      std::cout << red;
   } else if (colour == ORANGE) {
      std::cout << orange;
   } else if (colour == YELLOW) {
      std::cout << yellow;
   } else if (colour == GREEN) {
      std::cout << green;
   } else if (colour == BLUE) {
      std::cout << blue;
   } else if (colour == INDIGO) {
      std::cout << indigo;
   } else if (colour == VIOLET) {
      std::cout << violet;
   } else {
      std::cout << unknown;
   }
   std::cout << std::endl;
}
