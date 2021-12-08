#include "myPrint.h"//when myPrint.h and myPrint.cpp files are in your sketch directory
//#include <myPrint.h> //when installed in your library

myObject myNewObject("Hello"); //creates a new object with name "myNewObject" from class type myObject (can be any name)
int theLength;

void setup() {
  Serial.begin(115200);
}

void loop() {
  theLength = myNewObject.getLength(); //calling a method from the object
  Serial.println(theLength);
  delay(2000);
  myNewObject.setNewText("a longer text"); //calling a method from the object
  theLength = myNewObject.getLength(); //calling a method fromt the object
  Serial.println(theLength);
  delay(2000);
  myNewObject.textToHandle="hello my new object, how are you?"; //sets the property (also called attributes or sometimes variables) textToHandle to the value "hello my...
}
