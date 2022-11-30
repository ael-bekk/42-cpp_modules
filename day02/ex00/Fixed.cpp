#include "Fixed.hpp"

const int Fixed::fraction = FRACTION;

Fixed::Fixed():fixed(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed& object) {
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed &Fixed::operator=(Fixed & object) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = object.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed;
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed = raw;
}