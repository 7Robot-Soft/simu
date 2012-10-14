
#ifndef ROBOT_H
#define ROBOT_H
#include "simu/Object.h"

#include <string>

namespace simu {


/**
  * class Robot
  * 
  */

class Robot : public Object
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Robot ( );

  /**
   * Empty Destructor
   */
  virtual ~Robot ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  vector<Sensor*> sensors;
  Asserv* asserv;


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

  b2Body* body;
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

#endif // ROBOT_H
