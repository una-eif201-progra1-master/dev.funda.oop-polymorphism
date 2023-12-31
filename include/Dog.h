//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_DOG_H
#define MAIN_DOG_H

#include "Animal.h"

/*!
 * \class Dog
 * \brief The class Dog inherits from Animal
 * \file Dog.h
 * \brief The File Dog.h
 */
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Bark bark" << endl;
    }
};

#endif //MAIN_DOG_H
