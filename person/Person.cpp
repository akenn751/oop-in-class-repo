/* Summary:
 *
 * Title: Person.cpp
 * Author: Alex Kennedy
 * Created: Feb 28, 2024
 */

#include "Person.h"
#include <string>
/* Default Constructor */
Person::Person() : fName("null"), lName("null"), idNum(0) {}
/* Fully Parameterized Constructor */
Person::Person(std::string inFName, std::string inLName, int inIDNum) : fName(inFName), lName(inLName), idNum(inIDNum) {}
/* Accessors for Person Class */
std::string Person::getFName(){return fName;}
std::string Person::getLName(){return lName;}
int Person::getidNum(){return idNum;}
/* Mutators for Person Class */
void Person::setFName(std::string inFName){fName = inFName;}
void Person::setLName(std::string inLName){lName = inLName;}
void Person::setidNum(int inIDNum){idNum = inIDNum;}