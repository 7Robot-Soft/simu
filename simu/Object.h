
#ifndef OBJECT_H
#define OBJECT_H

#include <string>

namespace simu {


/**
  * class Object
  * 
  */

class Object
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Object (std::string id, float x, float y, float z, float theta, float height);

  /**
   * Empty Destructor
   */
  virtual ~Object ( );

  // Static Public attributes
  //  

  // Public attributes
  //  
  std::string id;
  float x;
  float y;
  float z;
  float theta;
  float height;

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


};
}; // end of package namespace

#endif // OBJECT_H
