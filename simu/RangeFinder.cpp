#include "RangeFinder.h"

#include <math.h>
#include <vector>

namespace simu {

// Constructors/Destructors
//  
    


RangeFinder::RangeFinder ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax) :
Sensor(id, x, y, z, theta, robot), world(world), rangeMax(rangeMax), zmin(zmin), zmax(zmax)
{
    
}

RangeFinder::~RangeFinder ( ) { }

//  
// Methods
//  
void RangeFinder::step()
{
    distance = 0.0f;
    RayCastCallback callback = RayCastCallback(zmin, zmax);
    world->RayCast(&callback, b2Vec2(robot->x+x, robot->y+y), 
            b2Vec2(rangeMax*cosf(robot->theta+theta)+robot->x+x, 
                   rangeMax*sinf(robot->theta+theta)+robot->y+y));


    if (callback.m_hit)
    {
        distance = 0;
        for (std::vector<b2Vec2>::iterator it = callback.points.begin(); it!=callback.points.end(); ++it)
        {
            float dist = (*it - b2Vec2(robot->x, robot->y)).Length();
            if (dist < distance)
                distance = dist;
        }
    }
}

// Accessor methods
//  


// Other methods
//  

}