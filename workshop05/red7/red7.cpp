
/**
 * Topics:
 * 
 * 1. Revision
 *  - Objects
 *  - Dynamic Memoery Management
 *  - Standard Input I/O
 * 2. Program layout
 *  - Declarations / Definitions
 *  - Forward Delcarations
 *  - Overloading Functions/Methods/Constructors
 * 3. Program I/O
 *  - STL classes
 *  - File I/O
 *  - I/O abstraction
 * 4. String
 *  - Methods
 *  - String I/O
 * 5. Command Line Arguments
 * 6. Randomness
 */

#include <iostream>
#include <string>

#include "Card.h"
#include "Rule.h"
#include "utils.h"

#define NUMBER_CARDS_TO_READ 5

void readOneCard(Colour* colour, int* number);

void setupGame(Card* hand[], int* lengthHand);
void playTheGame(Card* hand[], int lengthHand);
void cleanupGame(Card* hand[], int lengthHand);

int main(void) {
  
   // Array of Card objects -> cards array is ON the STACK
   // Card OBJECTS will be on the HEAP
   Card* hand[NUMBER_CARDS_TO_READ];
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      hand[i] = nullptr;
   }
   int numCards = 0;

   // Setup the game (using the defined data structures)
   setupGame(hand, &numCards);

   playTheGame(hand, numCards);

   // Cleanup - delete my array of objects
   cleanupGame(hand, numCards);

   return EXIT_SUCCESS;
}

void setupGame(Card* hand[], int* lengthHand) {
   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      Colour colour = RED;
      int number = 0;   
      readOneCard(&colour, &number);
      
      if (!std::cin.eof()) {
         // Put the card in the array
         Card* card = new Card(colour, number);
         hand[numRead] = card;

         // Increment cards read
         ++numRead;
      }
   }

   // Update the number of cards read
   *lengthHand = numRead;

   // When we had array's before - print out all the cards
   // numRead is guaratenteed to be no longer than length of the array
   printAllCards(hand, numRead);
}

void playTheGame(Card* hand[], int lengthCards) {
   std::cout << "Playing this Game " << std::endl;
   // Simple game
   Rule* rule = new Rule();

   // Keep setting cards until we run out
   // Q: How do we ensure we don't run out??
   int nCardsInHand = lengthCards;
   int move = 0;
   while(!std::cin.eof() && nCardsInHand > 0) {
      std::cout << std::endl
                << "Here are the cards in your hand: "
                << std::endl;
      printAllCards(hand, lengthCards);

      // Choose rule to play
      if (!std::cin.eof()) {
         std::cout << "Which card (choose index) do you want "
                   << "to move to the Rule?"
                   << std::endl;
         std::cin >> move;
         if (move >= 0 && move < lengthCards) {
            if(hand[move] != nullptr) {
               // Transfering ownership
               rule->setRule(hand[move]);
               hand[move] = nullptr;
            }
         }
      }
   }

   // Cleanup!
   delete rule;
}

void cleanupGame(Card* hand[], int lengthHand) {
   for(int i =0; i < lengthHand; ++i) {
      if (hand[i] != nullptr) {
         delete hand[i];
      }
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
