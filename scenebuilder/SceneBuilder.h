
#ifndef SCENEBUILDER_H
#define SCENEBUILDER_H

#include "../simu/Simulator.h"
#include "../iacomm/Dispatcher.h"
#include "../visu/View.h"

#include <string>

namespace scenebuilder {


/**
  * class SceneBuilder
  * 
  */

/******************************* Abstract Class ****************************
SceneBuilder does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class SceneBuilder
{
public:



  /**
   * @return int
   * @param  file
   * @param  simulator
   * @param  dispatcher
   * @param  view
   */
  virtual int create_scene (char* file, simu::Simulator* simulator, iacomm::Dispatcher* dispatcher, visu::View view ) = 0;


protected:

public:

protected:

public:

protected:


private:

public:

private:

public:

private:



};
}; // end of package namespace

#endif // SCENEBUILDER_H
