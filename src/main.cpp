//
// Created by Maikol Guzman on 21/11/23.
//

#include "Animal.h"
#include "Dog.h"
#include "Pig.h"

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.makeSound();  // Output: Some sound
    myPig.makeSound();     // Output: Oink oink
    myDog.makeSound();     // Output: Bark bark
    return 0;
}