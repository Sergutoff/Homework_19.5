
#include <iostream>

using namespace std;

class Animal
{
public:
    virtual void Voice()
    {
        cout << "voice" << "\n";
    }
    virtual ~Animal() {}  // Виртуальный деструктор
};
class Dog : public Animal
{
public:
    void Voice() override
    {
        cout << " Dog - Woof!" << "\n";
    }
};
class Cat : public Animal
{
public:
    void Voice() override
    {
        cout << " Cat - Meow!" << "\n";
    }
};
class Tiger : public Animal
{
public:
    void Voice() override
    {
        cout << " Tiger - Roar!" << "\n";
    }
};
class Duck : public Animal
{
public:
    void Voice() override
    {
        cout << " Duck - Quack!" << "\n";
    }
};
class Cow : public Animal
{
public:
    void Voice() override
    {
        cout << " Cow - Moo!" << "\n";
    }
};
int main()
{
    Animal* animals[5];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Tiger();
    animals[3] = new Duck();
    animals[4] = new Cow();

    for (Animal* a : animals)
        a->Voice();
    for (Animal* a : animals)
        delete a;

    return 0;
}