
#ifndef RANGEFINDER_H
#define RANGEFINDER_H
#include "simu/Sensor.h"

#include <string>

namespace simu {


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
  RangeFinder ( );

  /**
   * Empty Destructor
   */
  virtual ~RangeFinder ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  float distance;
  float rangeMax;

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  b2World world;
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

#endif // RANGEFINDER_H
