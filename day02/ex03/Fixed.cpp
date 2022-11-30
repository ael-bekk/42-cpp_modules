#include "Fixed.hpp"

const int Fixed::fraction = FRACTION;

Fixed::Fixed():fixed(0) {}

Fixed::Fixed(const int nb) {

    this->fixed = nb << this->fraction;
}

Fixed::Fixed(const float nb) {

    this->fixed = roundf(nb * (float)(1 << this->fraction));
}

Fixed::Fixed(Fixed const & object) {

    *this = object;
}

Fixed &Fixed::operator = (Fixed const & object) {

    this->fixed = object.fixed;
    return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits( void ) const {

    return this->fixed;
}

void Fixed::setRawBits( int const raw ) {

    this->fixed = raw;
}

float Fixed::     toFloat( void ) const {

    return (float)this->fixed / (1 << this->fraction);
}

int Fixed::toInt( void ) const {

    return this->fixed >> this->fraction;
}

std::ostream & operator << (std::ostream & out, Fixed const & object) {

    out << object.toFloat();
    return out;
}

//////////////////////////////////////////////////////////////////////

bool Fixed::operator > (Fixed const & obj) const {

    return this->fixed > obj.fixed;
}

bool Fixed::operator<(Fixed const & obj) const {

    return this->fixed < obj.fixed;
}

bool Fixed::operator >= (Fixed const & obj) const {

    return this->fixed >= obj.fixed;
}

bool Fixed::operator <= (Fixed const & obj) const {

    return this->fixed <= obj.fixed;
}

bool Fixed::operator == (Fixed const & obj) const {

    return this->fixed == obj.fixed;
}

bool Fixed::operator != (Fixed const & obj) const {

    return this->fixed != obj.fixed;
}

//////////////////////////////////////////////////////////////////////

Fixed Fixed::operator + (Fixed const & obj) const {

    Fixed n;
    n.setRawBits(obj.fixed + this->fixed);
    return n;
}

Fixed Fixed::operator + () const {

    return *this;
}

Fixed Fixed::operator - (Fixed const & obj) const {

    Fixed n;
    n.setRawBits(this->fixed - obj.fixed);
    return n;
}

Fixed Fixed::operator - () const {

    Fixed n(*this);

    n.setRawBits(-this->fixed);
    return n;
}

Fixed Fixed::operator * (Fixed const & obj) const {

    Fixed n;

    n.setRawBits((long long)((long long)this->fixed * (long long)obj.fixed) >> this->fraction);
    return n;
}

Fixed Fixed::operator / (Fixed const & obj) const {

    Fixed n;

    n.setRawBits(roundf(((float)this->fixed / (float)obj.fixed) * (float)(1 << this->fraction)));
    return n;
}

//////////////////////////////////////////////////////////////////////

Fixed    &Fixed::operator ++ () {

    this->fixed++;
    return *this;
}

Fixed    Fixed::operator ++ (int) {

    Fixed n(*this);
    this->fixed++;
    return (n);
}

Fixed    &Fixed::operator -- () {

    this->fixed--;
    return *this;
}

Fixed    Fixed::operator -- (int) {

    Fixed n(*this);
    this->fixed--;
    return (n);
}

//////////////////////////////////////////////////////////////////////

Fixed const &Fixed::min(Fixed & obj, Fixed & obj2) {

    return obj < obj2 ? obj : obj2;
}

Fixed const &Fixed::min(Fixed const & obj, Fixed const & obj2) {

    return obj < obj2 ? obj : obj2;
}


Fixed const &Fixed::max(Fixed & obj, Fixed & obj2) {

    return obj > obj2 ? obj : obj2;
}

Fixed const &Fixed::max(Fixed const & obj, Fixed const & obj2) {

    return obj > obj2 ? obj : obj2;
}