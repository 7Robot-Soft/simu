
#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <string>
#include <vector>
#include <Box2D/Box2D.h>

#include "Robot.h"

namespace simu {


/**
  * class Simulator
  * 
  */

class Simulator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Simulator ( );

  /**
   * Empty Destructor
   */
  virtual ~Simulator ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  std::vector<Robot*> robots;
  b2World* world;


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

#endif // SIMULATOR_H
