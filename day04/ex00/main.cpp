# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main()
{
    std::cout << "============================================\n";
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();


        std::cout << "--------------------------------------\n";
        std::cout << "'" << meta->getType() << "'" << std::endl;
        std::cout << "'" << j->getType() << "'" << std::endl;
        std::cout << "'" << i->getType() << "'" << std::endl;

        std::cout << "--------------------------------------\n";
        meta->makeSound();
        i->makeSound(); //will output the Cat sound!
        j->makeSound(); //will output the Dog sound!

        std::cout << "--------------------------------------\n";
        delete meta;
        delete i;
        delete j;
    }
    std::cout << "============================================\n";
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << "--------------------------------------\n";
        std::cout << "'" << meta->getType() << "'" << std::endl;
        std::cout << "'" << i->getType() << "'" << std::endl;

        std::cout << "--------------------------------------\n";
        meta->makeSound();
        i->makeSound();
        meta->makeSound();
        delete meta;
        delete i;
    }
    std::cout << "============================================\n";
    return 0;
}