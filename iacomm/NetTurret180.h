
#ifndef NETTURRET180_H
#define NETTURRET180_H

#include "../simu/Turret180.h"
#include "Net.h"

#include <string>

namespace iacomm {


/**
  * class NetTurret180
  * 
  */

class NetTurret180 : public Net
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  NetTurret180 ( );

  /**
   * Empty Destructor
   */
  virtual ~NetTurret180 ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  simu::Turret180* turret180;
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

#endif // NETTURRET180_H
