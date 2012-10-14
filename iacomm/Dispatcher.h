
#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <string>
#include <vector>

#include "Net.h"

namespace iacomm {


/**
  * class Dispatcher
  * 
  */

class Dispatcher
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Dispatcher ( );

  /**
   * Empty Destructor
   */
  virtual ~Dispatcher ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  std::vector<Net> entities;


  /**
   * @return int
   * @param  buffer
   * @param  length
   */
  int dispatch (char* buffer, unsigned int length )
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

#endif // DISPATCHER_H
