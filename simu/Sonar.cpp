#include "Sonar.h"

namespace simu {

// Constructors/Destructors
//  

Sonar::Sonar ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax) :
RangeFinder(id, x, y, z, theta, robot, world, zmin, zmax, rangeMax), mute(true)
{

}

Sonar::~Sonar ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  



}
