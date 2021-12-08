#include "myPrint.h"


myObject::myObject(String aText){
  textToHandle = aText;
}

int myObject::getLength(){ //this is a method
    return textToHandle.length();
  }


void myObject::setNewText(String newText){ //this is a method to set a property
    textToHandle = newText;
  }
