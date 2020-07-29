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

void printCard(int colour, int number);
void printColourAsString(int colour);

void readOneCard(int* colour, int* number);
// void readOneCard(int& colour, int& number);

int main(void) {
   int number[NUMBER_CARDS_TO_READ] = {};
   int colour[NUMBER_CARDS_TO_READ] = {};
   // for (int i = 0; i < NUMBER_CARDS_TO_READ; ++i) {
   //    number[i] = 0;
   //    colour[i] = 0;
   // }
   
   // Read a set number of cards from the user
   // Read until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      // int tmpColour = 0;
      // int tmpNumber = 0;
      // readOneCard(&tmpColour, &tmpNumber);
      // colour[numRead] = tmpColour;
      // number[numRead] = tmpNumber;

      readOneCard(&colour[numRead], &number[numRead]);
      // readOneCard(colour[numRead], number[numRead]);

      // Read the card value
      // std::cin >> colour[numRead];
      // std::cin >> number[numRead];

      if (!std::cin.eof()) {
         ++numRead;
      }
   }

   for (int i = 0; i < numRead && i < NUMBER_CARDS_TO_READ; ++i) {
      // Print out "natural version" of the card
      printCard(colour[i], number[i]);
   }

   return EXIT_SUCCESS;
}

void readOneCard(int* colour, int* number) {
   std::cin >> *colour;
   std::cin >> *number;
}

// void readOneCard(int& colour, int& number) {
//    std::cin >> colour;
//    std::cin >> number;
// }

void printCard(int colour, int number) {
   std::cout << "Card: ";
   printColourAsString(colour);
   std::cout << " " << number << std::endl;
}

void printColourAsString(int colour) {
   // Define some colours as string
   char red[] = "Red";
   char orange[] = "Orange";
   char yellow[] = "Yellow";
   char green[] = "Green";
   char blue[] = "Blue";
   char indigo[] = "Indigo";
   char violet[] = "Violet";
   char unknown[] = "UNKNOWN";

   // std::cout << "\tcolour: ";
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
   // std::cout << std::endl;
}
