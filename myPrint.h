#ifndef myPrint_H
#define myPrint_H

#include "Arduino.h"

class myObject
{
  public:
    myObject(String aText);
    int getLength();
    void setNewText(String newText);
    String textToHandle;
  private:
    //variables used only within the class scope, not exposed, cannot be set or called from outside the class
    
 };
#endif
