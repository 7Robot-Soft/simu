
#ifndef SONAR_H
#define SONAR_H
#include "RangeFinder.h"

#include <string>

namespace simu {


/**
  * class Sonar
  * 
  */

class Sonar : public RangeFinder
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Sonar ( std::string id, float x, float y, float z, float theta, 
          Robot* robot, b2World* world,
          float zmin, float zmax, float rangeMax);

  /**
   * Empty Destructor
   */
  virtual ~Sonar ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  bool mute;
  float threshold;

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

#endif // SONAR_H
