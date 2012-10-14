
#ifndef TURRET180_H
#define TURRET180_H
#include "simu/Sensor.h"

#include <string>

namespace simu {


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

  vector<TurretAnswer> answer;

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


  void initAttributes ( ) ;

};
}; // end of package namespace

#endif // TURRET180_H
