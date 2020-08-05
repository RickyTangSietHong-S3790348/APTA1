
/**
 * Topics:
 * 
 * 0. Revision
 *  - Pointers
 * 1. Classes
 *  - "this" pointer
 * 2. Typedef
 * 3. Multi-file Programs
 *  - Header Files
 *  - Source Files
 *  - (Partial compilation in Week 04)
 * 4. Arrays are pointers!
 *  - 1D arrays
 *  - 2D arrays
 *  - char*
 * 5. Program Memory Management
 *  - Stack
 *  - Heap
 *  - Function Calls
 * 6. Dynamic Memory management
 *  - Primative Types (new / dete)
 *  - Arrays (new[] / delete[])
 *  - Object allocation (new - constructor)
 *  - Object deallocation (delete - deconstructor)
 * 7. Command-line I/O Redirection
 *  - <
 *  - >
 * 8. Comparing text files
 *  - diff
 */

#include <iostream>
#include <string>

#include "Card.h"
#include "utils.h"

#define NUMBER_CARDS_TO_READ 5

void readOneCard(int* colour, int* number);

int main(void) {
   // TODO: Convert to use a Class
   int colour = 0;
   int number = 0;
   
   // Array of Card objects -> cards array is ON the STACK
   // Card OBJECTS will be on the HEAP
   Card* cards[NUMBER_CARDS_TO_READ];
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      cards[i] = nullptr;
   }

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      readOneCard(&colour, &number);
      
      if (!std::cin.eof()) {
         // Put the card in the array
         Card* card = new Card(colour, number);
         cards[numRead] = card;

         // Print the card read
         // printCard(card);

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
