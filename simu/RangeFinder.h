
#ifndef RANGEFINDER_H
#define RANGEFINDER_H
#include "Robot.h"
#include "Sensor.h"

#include <Box2D/Box2D.h>
#include <string>
#include <vector>

namespace simu {
    
class RayCastCallback : public b2RayCastCallback
{
public:
    RayCastCallback(float zmin, float zmax) : zmin(zmin), zmax(zmax)
    {       
        m_hit = false;
    }
float32 ReportFixture(b2Fixture* fixture, const b2Vec2& point,
        const b2Vec2& normal, float32 fraction)
    {
        void* userData = fixture->GetUserData();
        if (userData != NULL)
        {
            Object* object = (Object*)userData;
            if ( (object->z <= zmax) && ((object->z + object->height) >= zmin) )
            {
                points.push_back(point);
                normals.push_back(normal);
                m_hit = true;
            }
        }
        return 1.0f;
    }
bool m_hit;
std::vector<b2Vec2> points;
std::vector<b2Vec2> normals;
float zmin;
float zmax;
};


/**
  * class RangeFinder
  * 
  */

class RangeFinder : public Sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  RangeFinder ( std::string id, float x, float y, float z, float theta, float height,
          Robot* robot, b2World* world, float rangeMax);

  /**
   * Empty Destructor
   */
  virtual ~RangeFinder ( );
  
  virtual void step();

  // Static Public attributes
  //  

  // Public attributes
  //  

  
  

protected:

  // Protected attributes


  b2World* world;
public:
  float rangeMax;
  float distance;

protected:

public:

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:

private:

public:

private:


};
}; // end of package namespace

#endif // RANGEFINDER_H
