
#ifndef SENSOR_H
#define SENSOR_H

#include "Modifier.h"
#include "Object.h"
#include "Robot.h"

#include <string>
#include <vector>

class Robot;

namespace simu {


/**
  * class Sensor
  * 
  */

class Sensor : public Object
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Sensor (std::string id, float x, float y, float z, float theta, float height, Robot* robot);
  /// height <- la plage de sensibilité vertical du capteur

  /**
   * Empty Destructor
   */
  virtual ~Sensor ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  std::vector<Object*> sensedObjects;
  Modifier* modifier;


  /**
   */
  virtual void step ( )
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


};
}; // end of package namespace

#endif // SENSOR_H
