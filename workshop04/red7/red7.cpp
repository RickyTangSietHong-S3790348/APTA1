
/**
 * Topics:
 * 
 * 1. Revision
 *  - Dynamic Memory management
 *  - Primative Types (new / dete)
 *  - Arrays (new[] / delete[])
 * 2. Enumeration
 * 3. Problem solving with software
 *  - How can we actually implement the game rules?
 * 4. Object ownership
 *  - Create a GameRule class
 *  - Use the class to check (if we've won the game)
 * 5. Classes
 *  - Default constructor
 * 6. Copying Objects
 *  - Shallow copy
 *  - Deep copy
 *  - Copy constructor
 * 7. Automated Compilation
 * 8. GDB / CodeLLDB
 */

#include <iostream>
#include <string>

#include "Card.h"
#include "utils.h"

#define NUMBER_CARDS_TO_READ 5

void readOneCard(int* colour, int* number);

int main(void) {
  
   // Array of Card objects -> cards array is ON the STACK
   // Card OBJECTS will be on the HEAP
   Card* cards[NUMBER_CARDS_TO_READ];
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      cards[i] = nullptr;
   }

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      int colour = 0;
      int number = 0;   
      readOneCard(&colour, &number);
      
      if (!std::cin.eof()) {
         // Put the card in the array
         Card* card = new Card(colour, number);
         cards[numRead] = card;

         // Increment cards read
         ++numRead;
      }
   }

   // When we had array's before - print out all the cards
   for (int i = 0; i < numRead && i < NUMBER_CARDS_TO_READ; ++i) {
      printCard(cards[i]);
   }

   // Cleanup - delete my array of objects
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      if (cards[i] != nullptr) {
         delete cards[i];
      }
   }

   return EXIT_SUCCESS;
}

void readOneCard(int* colour, int* number) {
   std::cin >> *colour;
   std::cin >> *number;
}
