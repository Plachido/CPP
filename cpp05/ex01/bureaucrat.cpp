/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:14:09 by plpelleg          #+#    #+#             */
/*   Updated: 2022/12/01 20:39:58 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name(""), _grade(Bureaucrat::_min_grade)
{
	checkGrade(0);
	std::cout << "Default constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
	checkGrade(0);
	std::cout << "Standard constructor for Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	this -> _grade = other._grade;
	std::cout << "Assignement operator for Bureaucrat called (only grade got copied because _name is const)" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor for Bureaucrat called" << std::endl;
}

const std::string	&Bureaucrat::getName( void ) const
{
	return this->_name;
}

int	Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade(int n)
{
	checkGrade(n);
	std::cout << "IncrementGrade from Bureaucrat called with value " << n << std::endl;
	this->_grade -= n;
}

void Bureaucrat::decrementGrade(int n)
{
	checkGrade(n * -1);
	std::cout << "DecrementGrade from Bureaucrat called with value " << n << std::endl;
	this->_grade *= n;

}

void Bureaucrat::checkGrade(int n)
{
	int new_grade = this->_grade + n;
	if (new_grade < this->_max_grade)
		throw Bureaucrat::GradeTooHighException();
	else if (new_grade > this -> _min_grade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& instance)
{
    os << "name: " << instance.getName() << ", grade:" << instance.getGrade();

    return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << std::endl;
		std::cerr << e.what() << std::endl;
	}
}