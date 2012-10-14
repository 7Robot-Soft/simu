
#ifndef SENSOR_H
#define SENSOR_H
#include "simu/Object.h"
#include "simu/Object.h"

#include <string>

namespace simu {


/**
  * class Sensor
  * 
  */

class Sensor : public Object, public Object
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Sensor ( );

  /**
   * Empty Destructor
   */
  virtual ~Sensor ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  vector<Objet*> sensedObjects;
  simu::Modifier modifier;


  /**
   */
  void step ( )
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  Robot* robot;
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

#endif // SENSOR_H
