
#ifndef BUMPER_H
#define BUMPER_H
#include "simu/RangeFinder.h"

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
  Bumper ( );

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


  void initAttributes ( ) ;

};
}; // end of package namespace

#endif // BUMPER_H
