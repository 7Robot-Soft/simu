
#ifndef BUMPER_H
#define BUMPER_H
#include "RangeFinder.h"

#include <Box2D/Box2D.h>
#include <string>

namespace simu {


/**
  * class Bumper
  * 
  */

class Bumper : public RangeFinder
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bumper ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax=0.02);

  /**
   * Empty Destructor
   */
  virtual ~Bumper ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  bool answer;

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:

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

#endif // BUMPER_H
