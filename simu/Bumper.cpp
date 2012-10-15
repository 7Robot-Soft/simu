#include "Bumper.h"

namespace simu {

// Constructors/Destructors
//  

Bumper::Bumper ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax):
RangeFinder(id, x, y, z, theta, robot, world, z-0.01, z+0.01, rangeMax)
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