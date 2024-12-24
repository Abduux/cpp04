/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 05:02:24 by codespace         #+#    #+#             */
/*   Updated: 2024/12/23 05:11:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

const std::string& Animal::getType() const 
{
    return this->type; // returning the type of the animal
}

void Animal::makeSound() const
{
    std::cout << "Animal Sound !!!\n";
}

//---------------------- constructors 

Animal::Animal() : type("Animal")
{
    std::cout << "Base Class Animal " << this->type << " destroyed!" << std::endl;
}

Animal::Animal(std::string _type) // main 
{
    std::cout << "Base Class Animal " << this->type << " destroyed!" << std::endl;
    this->type = _type;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
    std::cout << "Base Class Animal " << this->type << " Copied!" << std::endl;
}

//---------------------- copy assignment operator 
Animal& Animal::operator=(const Animal &lhs) // 
{
    if(this == &lhs)
        return *this;
    this->type = lhs.type;
    return *this;
}

//---------------------- Destructor //----------------------
Animal::~Animal() 
{
    std::cout << "Base Class Animal " << this->type << " destroyed!" << std::endl;
}