#include "dog.h"

Dog::Dog(){};
Dog::Dog(const std::string& newBreed)
{
    breed = newBreed;
}
void Dog::doTrick()
{
    std::cout << "Dog # " << std::to_string(id) << " of breed " << breed << " just did a trick!" << std::endl;
}
const std::string& Dog::getBreed() 
{
    return breed;
}
void Dog::setBreed(const std::string& newBreed)
{
    breed = newBreed;
}