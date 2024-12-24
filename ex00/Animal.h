/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:03:57 by codespace         #+#    #+#             */
/*   Updated: 2024/12/23 05:02:21 by codespace        ###   ########.fr       */
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
        Animal(std::string _type); // main constructor
        Animal(const Animal &lhs_copy); // copy constructor
        Animal& operator=(const Animal &lhs); // copy assignment 
        ~Animal(); // destructor 

        void makeSound() const;
        const std::string& getType() const;
};

#endif