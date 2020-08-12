
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
#include "Rule.h"
#include "utils.h"

#define NUMBER_CARDS_TO_READ 5

void readOneCard(Colour* colour, int* number);

void playTheGame(Card* cards[], int numCards);

void deepCopyCards(Card* source[], Card* copy[], int numCards);

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
      Colour colour = RED;
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
   // numRead is guaratenteed to be no longer than length of the array
   printAllCards(cards, numRead);

   playTheGame(cards, numRead);

   // Cleanup - delete my array of objects
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      if (cards[i] != nullptr) {
         delete cards[i];
      }
   }

   return EXIT_SUCCESS;
}


void playTheGame(Card* cards[], int numCards) {
   std::cout << "Playing this Game " << std::endl;
   // Simple game
   Rule* rule = new Rule();

   // Keep setting cards until we run out
   for(int i =0; i < numCards; ++i) {
      
      // Transfering ownership
      // rule->setRule(cards[i]);
      // cards[i] = nullptr;

      // Copy of the card object
      // Transfer ownership of the COPY!!
      Card* copyCard = new Card(*cards[i]);
      rule->setRule(copyCard);
      copyCard = nullptr;

      std::cout << "Setting rule as: ";
      printColourAsString(rule->getRule());
      std::cout << std::endl;
      
   }

   // Cleanup!
   delete rule;
}


void deepCopyCards(Card* source[], Card* copy[], int numCards) {
   for(int i =0; i < numCards; ++i) {
      // SHALLOW!!!!!!!
      // copy[i] = source[i];

      // Deep
      copy[i] = new Card(*source[i]);
   }
}


void readOneCard(Colour* colour, int* number) {
   // Read Colour
   int readColour = 0;
   std::cin >> readColour;
   if (readColour == 0) {
      *colour = RED;
   } else if (readColour == 1) {
      *colour = ORANGE;
   } else if (readColour == 2) {
      *colour = YELLOW;
   } else if (readColour == 3) {
      *colour = GREEN;
   } else if (readColour == 4) {
      *colour = BLUE;
   } else if (readColour == 5) {
      *colour = INDIGO;
   } else if (readColour == 6) {
      *colour = VIOLET;
   }

   // Read Number
   std::cin >> *number;
}
