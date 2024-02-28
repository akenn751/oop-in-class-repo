/* Summary:
 *
 * Title: Person.h
 * Author: Alex Kennedy
 * Created: Feb 28, 2024
 */

#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
    public:
/* Constructors for Person Class */
    Person();
    // desc: Default constructor
    // receives: nothing
    // returns: nothing
    Person(std::string, std::string, int);
    // desc: fully parameterized constructor
    // receives: string (fName), string (lName), int (idNum)
    // returns: nothing
/* Accessors for Person Class */
    std::string getFName();
    // desc: getter for first name 
    // receives: nothing
    // returns: sting (first name)
    std::string getLName();
    // desc: getter for last name 
    // receives: nothing
    // returns: string (last name)
    int getidNum();
    // desc: getter for student ID number 
    // receives: nothing
    // returns: int (student ID number)
/* Mutators for Person Class */
    void setFName(std::string);
    // desc: setter for first name
    // receives: string (first name)
    // returns: nothing
    void setLName (std::string);
    // desc: setter for last name
    // receives: string (last name)
    // returns: nothing
    void setidNum (int);
    // desc: setter for student ID number
    // receives: int (student ID)
    // returns: nothing
    private:
/* Member Variables for Person Class */
    std::string fName;
    std::string lName;
    int idNum;
};

#endif