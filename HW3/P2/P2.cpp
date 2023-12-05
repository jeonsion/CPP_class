#include <iostream>
using namespace std;


class Animal{
public:
    virtual void speak(){
        cout << "Animal" << endl;
}
};


class Dog : public Animal   {
public:
    void speak(){
        cout << "Bark" << endl;
    }

};


class Cat : public Animal   {
public:
    void speak(){
        cout << "Meow" << endl;
    }
};


int main()  {
    cout << "20191545 전시온 " << endl;
    Animal* animal;
    Dog dog;
    Cat cat;


    animal = &dog;
    animal->speak();

    animal = &cat;
    animal->speak();

    return 0;
}