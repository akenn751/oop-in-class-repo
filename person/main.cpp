/* Summary:
 *
 * Title: main.cpp
 * Author: Alex Kennedy
 * Created: Feb 28, 2024
 */
#include "Person.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

int main(){
/* Test of Fully Parameterized Constructor */
    Person AK("Alex", "Kennedy", 123);
/* Test of Accessor/Getters */
//    std::cout << AK.getFName() << std::endl;
//    std::cout << AK.getLName() << std::endl;
//    std::cout << AK.getidNum() << std::endl;
/* Test of Default Constructor */
    // Person JS();
    // JS.setFName("John");
/* Test of Setters  */
    Person FB("Frodo", "Baggins", 234);
    FB.setFName("Samwise");
    FB.setLName("Gamgee");
    FB.setidNum(345);
//    std::cout << FB.getFName() << std::endl;
//    std::cout << FB.getLName() << std::endl;
//    std::cout << FB.getidNum() << std::endl;
/* Random Number Function*/
    srand(time(NULL));
    int randNum = rand()%6+1;
    std::cout << randNum << std::endl;
/* Random Fine Generator*/
    float randomFine()
    {
        float randFine = rand()%100100+1;
        randFine = randFine / 100;
        return randFine;
    }
/* Test of Display*/
    std::cout << FB.getFName() << ", " << FB.getLName() << " : " << FB.getidNum() << std::endl;
              << "Fine:" << randomFine() << std::endl;
    return 0;
};