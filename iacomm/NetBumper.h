
#ifndef NETBUMPER_H
#define NETBUMPER_H

#include "../simu/Bumper.h"
#include "Net.h"

#include <string>

namespace iacomm {


/**
  * class NetBumper
  * 
  */

class NetBumper : public Net
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  NetBumper ( );

  /**
   * Empty Destructor
   */
  virtual ~NetBumper ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  simu::Bumper* bumper;
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

#endif // NETBUMPER_H
