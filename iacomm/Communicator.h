
#ifndef COMMUNICATOR_H
#define COMMUNICATOR_H

#include "Dispatcher.h"

#include <string>

namespace iacomm {


/**
  * class Communicator
  * 
  */

class Communicator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Communicator ( );

  /**
   * Empty Destructor
   */
  virtual ~Communicator ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  int socket;
  Dispatcher* dispatcher;
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

#endif // COMMUNICATOR_H
