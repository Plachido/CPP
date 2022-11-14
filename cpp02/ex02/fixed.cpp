/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:00:41 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/14 19:35:25 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed(void) : _val(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called\n";
	this->_val = num << this->_fract;
	return;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called\n";
    this->_val = roundf(num * (1 <<  this->_fract));

    return ;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_val;
}

Fixed	&Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_val = f.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;

    return ;
}

float Fixed::toFloat(void) const
{
	return ((double)this->_val / (double)(1 << this->_fract));
}

int Fixed::toInt(void) const
{
	return this->_val >> this->_fract;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();

	return o;
}

bool	Fixed::operator>(Fixed const &other) const {
	return getRawBits() > other.getRawBits();
}

bool	Fixed::operator<(Fixed const &other) const {
	return getRawBits() < other.getRawBits();
}

bool	Fixed::operator>=(Fixed const &other) const {
	return getRawBits() >= other.getRawBits();
}

bool	Fixed::operator<=(Fixed const &other) const {
	return getRawBits() <= other.getRawBits();
}

bool	Fixed::operator==(Fixed const &other) const {
	return getRawBits() == other.getRawBits();
}

bool	Fixed::operator!=(Fixed const &other) const {
	return getRawBits() != other.getRawBits();
}


Fixed Fixed::operator+(const Fixed other) const
{
    Fixed ret;

    ret.setRawBits(getRawBits() + other.getRawBits());
    return ret;
}

Fixed	Fixed::operator-(Fixed const &other) const {
	Fixed	ret;
	ret.setRawBits(getRawBits() - other.getRawBits());
	return ret;
}

Fixed	Fixed::operator*(Fixed const &other) const {
	Fixed	ret;
	ret.setRawBits(getRawBits() * other.getRawBits() >> _fract);
	return ret;
}

Fixed	Fixed::operator/(Fixed const &other) const {
	Fixed	ret;
	ret.setRawBits(getRawBits() / other.getRawBits() << _fract);
	return ret;
}

Fixed&	Fixed::operator++() {
	_val++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {
	_val--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}
	
const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}