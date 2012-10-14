
#ifndef NETSONAR_H
#define NETSONAR_H

#include <string>

namespace iacomm {


/**
  * class NetSonar
  * 
  */

class NetSonar
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  NetSonar ( );

  /**
   * Empty Destructor
   */
  virtual ~NetSonar ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  simu::Sonar* sonar;
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

#endif // NETSONAR_H
