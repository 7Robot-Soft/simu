
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
  Sonar ( );

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


  void initAttributes ( ) ;

};
}; // end of package namespace

#endif // SONAR_H
