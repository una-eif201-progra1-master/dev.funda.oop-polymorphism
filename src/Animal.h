//
// Created by Maikol Guzman on 21/11/23.
//

#ifndef MAIN_ANIMAL_H
#define MAIN_ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

// Example of Polymorphism
class Animal {
public:
    virtual void makeSound() {
        cout << "Some sound" << endl;
    }
};

#endif //MAIN_ANIMAL_H
