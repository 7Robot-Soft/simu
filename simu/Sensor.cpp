#include <stdio.h>

#include "Sensor.h"

namespace simu {

// Constructors/Destructors
//  

Sensor::Sensor (std::string id, float x, float y, float z, float theta, Robot* robot) :
        robot(robot), Object(id, x, y, z, theta, 0) {
    modifier = NULL;
}

Sensor::~Sensor ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


}
