#include "Sonar.h"

namespace simu {

// Constructors/Destructors
//  

Sonar::Sonar ( ) {
initAttributes();
}

Sonar::~Sonar ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Sonar::initAttributes ( ) {
  mute = true;
}

}
