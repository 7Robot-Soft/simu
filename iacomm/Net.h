
#ifndef NET_H
#define NET_H

#include <string>

namespace iacomm {


/**
  * class Net
  * 
  */

class Net
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Net ( );

  /**
   * Empty Destructor
   */
  virtual ~Net ( );

  // Static Public attributes
  //  

  // Public attributes
  //  



  /**
   * @return int
   * @param  buffer
   * @param  length
   */
  int parse (char* buffer, unsigned int length )
  {
      return 0;
  }


  /**
   * @return int
   */
  int send ( )
  {
      return 0;
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



};
}; // end of package namespace

#endif // NET_H
