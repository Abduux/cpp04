/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 19:12:36 by ahraich           #+#    #+#             */
/*   Updated: 2024/12/23 04:11:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.h"
#include "Dog.h"



int main()
{
    const Animal* meta  = new Animal();
    const Animal* j     = new Dog();
    const Animal* i     = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

       i->makeSound(); //will output the cat sound!
       j->makeSound();
    meta->makeSound();
    return 0;
}