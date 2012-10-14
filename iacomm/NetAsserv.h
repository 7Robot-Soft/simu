
#ifndef NETASSERV_H
#define NETASSERV_H

#include "../simu/Asserv.h"
#include "Net.h"

#include <string>

namespace iacomm {


/**
  * class NetAsserv
  * 
  */

class NetAsserv : public Net
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  NetAsserv ( );

  /**
   * Empty Destructor
   */
  virtual ~NetAsserv ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  simu::Asserv* asserv;
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

#endif // NETASSERV_H
