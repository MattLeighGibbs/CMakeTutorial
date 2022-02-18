#ifndef _DOG_H_
#define _DOG_H_

#include <iostream>
#include <string>

class Dog 
{
public:
Dog();
Dog(const std::string& breed);
void doTrick();
const std::string& getBreed();
void setBreed(const std::string& newBreed);
private:
int id{0};
std::string breed{"NULL"};
};

#endif