#include "Bumper.h"

namespace simu {

// Constructors/Destructors
//  

Bumper::Bumper ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax):
RangeFinder(id, x, y, z, theta, 0.02, robot, world, rangeMax)
{
}

Bumper::~Bumper ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

}