//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_PIG_H
#define MAIN_PIG_H

#include "Animal.h"

/*!
 * \class Pig
 * \file Pig.h
 * \brief The class Pig inherits from Animal
 */
class Pig : public Animal {
public:
    void makeSound() override {
        cout << "Oink oink" << endl;
    }
};

#endif //MAIN_PIG_H
