#include "Turret180.h"

namespace simu {

// Constructors/Destructors
//  

Turret180::Turret180 ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax) :
 Sensor(id, x, y, z, theta, robot)
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
