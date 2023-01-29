# include "Dog.hpp"
# include "Cat.hpp"

int main()
{
    // const Animal e;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
    std::cout << "==========================================\n";
    {
        Animal** arr = new Animal*[10];
        
        std::cout << "-------------------------------------\n";
        for (int i = 0; i < 10; i++)
            if (i % 2)
                arr[i] = new Dog();
            else
                arr[i] = new Cat();
        std::cout << "-------------------------------------\n";
        for (int i = 0; i < 10; i++)
            delete arr[i];
        delete [] arr;
    }
    system("leaks Abstract");
}