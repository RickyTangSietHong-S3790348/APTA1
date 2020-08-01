#include <iostream>
#include <string>

#include "Boats.h"

Boat::Boat(std::string name, double weight, double length) {
   this->name = new std::string(name);
   this->weight = new double(weight);
   this->length = new double(length);
}

Boat::~Boat() {
   std::cout << "~Boat" << std::endl;
   delete name;
   delete weight;
   delete length;
}

std::string Boat::getName() {
   return *name;
}

double Boat::getWeight() {
   return *weight;
}

double Boat::getLength() {
   return *length;
}

void Boat::setName(std::string name) {
   // This keyword is a POINTER!!!!
   // (*this).name = name;

   *(this->name) = name;
}