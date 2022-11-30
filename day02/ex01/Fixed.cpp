#include "Fixed.hpp"

const int Fixed::fraction = FRACTION;

Fixed::Fixed():fixed(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb) {
    std::cout << "Int constructor called" << std::endl;
    this->fixed = nb << this->fraction;
}

Fixed::Fixed(const float nb) {
    std::cout << "Float constructor called" << std::endl;
    this->fixed = roundf(nb * (float)(1 << this->fraction));
}

Fixed::Fixed(Fixed const & object) {
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed &Fixed::operator=(Fixed const & object) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = object.fixed;
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

float Fixed::toFloat( void ) const {
    return (float)this->fixed / (1 << this->fraction);
}

int Fixed::toInt( void ) const {
    return this->fixed >> this->fraction;
}

std::ostream & operator<<(std::ostream & out, Fixed const & object) {
    out << object.toFloat();
    return out;
}
