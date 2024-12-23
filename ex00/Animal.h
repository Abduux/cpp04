/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahraich <ahraich@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:03:57 by codespace         #+#    #+#             */
/*   Updated: 2024/12/22 19:35:59 by ahraich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal(); // default
        Animal(std::string _type);
        Animal(const Animal &lhs_copy);
        Animal& operator=(const Animal &lhs);
        ~Animal();

        void makeSound();
        void getType();
};

Animal::Animal() // default constructor
{
    
}

Animal::Animal(std::string _type) // main constructor
{
    
}

Animal::Animal(const Animal &copy) // copy constructor
{
    
}

Animal& Animal::operator=(const Animal &lhs) // copy assignment operator overload
{
    
}



Animal::~Animal() // destructor
{
}





void Animal::makeSound()
{
    
}



#endif