#include "Card.h"
#include <iostream>

// Implementation of the card methods
// Card::Card(Colour _colour, int _number) :
//    colour(_colour),
//    number(_number)
// {
// }

Card::Card(Colour _colour, int _number)
{
   this->colour = new Colour(_colour);
   this->number = new int(_number);
}

Card::~Card() {
   // std::cout << "Card::~Card" << std::endl;
   delete colour;
   delete number;
}

Colour Card::getColour() {
   return *colour;
}

int Card::getNumber() {
   return *number;
}
