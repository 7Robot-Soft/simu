
#ifndef TURRET180_H
#define TURRET180_H

#include "RangeFinder.h"
#include "Sensor.h"

#include <string>
#include <vector>

namespace simu {


struct TurretAnswer{
    float distance;
    float angle;
};

/**
  * class Turret180
  * 
  */

class Turret180 : public Sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Turret180 ( );

  /**
   * Empty Destructor
   */
  virtual ~Turret180 ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  std::vector<TurretAnswer> answer;

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  RangeFinder* laser;
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

#endif // TURRET180_H
