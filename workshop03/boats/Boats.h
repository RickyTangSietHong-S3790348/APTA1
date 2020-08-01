
#ifndef BOATS_H
#define BOATS_H

#include <string>

class Boat {
public:
   Boat(std::string name, double weight, double length);
   ~Boat();

   std::string getName();
   double getWeight();
   double getLength();

   void setName(std::string name);

private:
   std::string* name;
   double* weight;
   double* length;
};

#endif // BOATS_H
