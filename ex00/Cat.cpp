
#include "Cat.h"


//-------------------------------- constructor
Cat::Cat(): Animal("Cat")
{
    std::cout << this->getType() << " is constructed" << std::endl;
}

Cat::Cat(const Cat& copy)
{
    this->type = copy.type;
    std::cout <<"Cat copy constructed called\n";
}

Cat& Cat::operator=(const Cat& copy)
{
    if(this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

//---------------------------- destructor

Cat::~Cat()
{
    std::cout << "Cat desctructor called" << std::endl;
}
