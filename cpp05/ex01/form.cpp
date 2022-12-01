/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:14:12 by plpelleg          #+#    #+#             */
/*   Updated: 2022/12/01 20:53:10 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

Form::Form() : _name(""), _gradeToSign(_min_grade), _gradeToExecute(_min_grade)
{
	std::cout << "Default constructor for Form called" << std::endl;
	this->_is_signed = 0;

}

Form::Form(std::string name, int grade_ts, int grade_te) : _name(name), _gradeToSign(grade_ts), _gradeToExecute(grade_te)
{
	std::cout << "Standard constructor for Form called" << std::endl;
	this->_is_signed = 0;
	checkGrade(this->_gradeToExecute);
	checkGrade(this->_gradeToSign);
}

const std::string &Form::getName( void ) const
{
	return this->_name;
}

int Form::getSignGrade( void ) const
{
	return this->_gradeToSign;
}

int Form::getExecGrade( void ) const
{
	return this->_gradeToExecute;
}

void Form::checkGrade(int n)
{
	if (n < this->_max_grade)
		throw Form::GradeTooHighException();
	else if (n > this -> _min_grade)
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& instance)
{
    os << "name: " << instance.getName() << ", Sign Grade: " << instance.getSignGrade() << ", Execution Grade: " << instance.getExecGrade() << std::endl;
    return (os);
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Too high grade");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Too low grade");
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() <= this->getExecGrade())
		this->_is_signed = 1;
	else
		throw Form::GradeTooLowException();
}