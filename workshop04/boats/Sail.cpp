
#include "Sail.h"

Sail::Sail() :
    colour("black")
{}

Sail::Sail(Sail& other) :
    colour(other.colour)
{}

Sail::~Sail() {
    
}

std::string Sail::getColour() {
    return colour;
}

void Sail::setString(std::string colour) {
    this->colour = colour;
}

