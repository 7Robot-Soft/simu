#include "Turret180.h"

namespace simu {

// Constructors/Destructors
//  

Turret180::Turret180 ( std::string id, float x, float y, float z, float theta, float height,
          Robot* robot, b2World* world,  float rangeMax) :
 Sensor(id, x, y, z, theta, height, robot)
{
}

Turret180::~Turret180 ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

}
