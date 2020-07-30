
#ifndef COSC_ASSIGN_ONE_WALL_FOLLOWER
#define COSC_ASSIGN_ONE_WALL_FOLLOWER

#include "Position.h"
#include "Trail.h"
#include "Types.h"

class WallFollower {
public:

   /*                                           */
   /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
   /*                                           */


   // Constructor/Destructor
   WallFollower();
   ~WallFollower();

   // Solve the maze
   void execute(Maze maze);

   // Get a DEEP COPY of the path the robot travelled
   Trail* getFullPath();

   /*                                           */
   /* YOU MAY ADD YOUR MODIFICATIONS HERE       */
   /*                                           */

private:

   /*                                           */
   /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
   /*                                           */

   // Trail of positions that the robot travelled
   Trail* path;


   /*                                           */
   /* YOU MAY ADD YOUR MODIFICATIONS HERE       */
   /*                                           */
};

#endif // COSC_ASSIGN_ONE_WALL_FOLLOWER
