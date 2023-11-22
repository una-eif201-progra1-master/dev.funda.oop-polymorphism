# Polymorphism

https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/

```C++
// Example of Polymorphism
class Animal {
  public:
    virtual void makeSound() {
        cout << "Some sound" << endl;
    }
};

class Pig : public Animal {
  public:
    void makeSound() override {
        cout << "Oink oink" << endl;
    }
};

class Dog : public Animal {
  public:
    void makeSound() override {
        cout << "Bark bark" << endl;
    }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.makeSound();  // Output: Some sound
    myPig.makeSound();     // Output: Oink oink
    myDog.makeSound();     // Output: Bark bark
    return 0;
}

```

This demonstrates polymorphism where the `makeSound()` method behaves differently based on the object type (`Animal`, `Pig`, `Dog`).