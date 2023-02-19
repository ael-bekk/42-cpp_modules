#include <iostream>
#include <iomanip>
#include <cmath>

struct Data
{
    int i;
};

class Serializer {
    public:
        static uintptr_t serialize(Data* ptr) {
            return reinterpret_cast<uintptr_t>(ptr);
        }
        static Data* deserialize(uintptr_t raw) {
            return reinterpret_cast<Data *>(raw);
        }
};

int main()
{
    Serializer c;
    Data o;
    o.i = 88;
    uintptr_t p = c.serialize(&o);
    Data* ptr = c.deserialize(p);
    std::cout << ptr << " | " << &o << std::endl;
    std::cout << ptr->i << " | " << o.i << std::endl;
    return 0;
}