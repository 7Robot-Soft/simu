#include "Sonar.h"

namespace simu {

// Constructors/Destructors
//  

Sonar::Sonar ( std::string id, float x, float y, float z, float theta, float height, 
          Robot* robot, b2World* world,  float rangeMax) :
RangeFinder(id, x, y, z, theta, height, robot, world, rangeMax), mute(true)
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
