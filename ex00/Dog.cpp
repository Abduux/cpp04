/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 04:59:02 by codespace         #+#    #+#             */
/*   Updated: 2024/12/23 05:10:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.h"

//-------------------------------- constructor
Dog::Dog(): Animal("Dog")
{
    std::cout << this->getType() << " is constructed" << std::endl;
}

Dog::Dog(const Dog& copy)
{
    this->type = copy.type;
    std::cout <<"dog copy constructed called\n";
}

Dog& Dog::operator=(const Dog& copy)
{
    if(this == &copy)
        return *this;
    this->type = copy.type;
    return *this;
}

//---------------------------- destructor

Dog::~Dog()
{
    std::cout << "Dog desctructor called" << std::endl;
}

