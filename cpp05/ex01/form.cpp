/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:14:12 by plpelleg          #+#    #+#             */
/*   Updated: 2022/12/01 20:10:30 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "form.hpp"

Form::Form() : _name(""), _gradeToSign(_min_grade), _gradeToExecute(_min_grade)
{
	std::cout << "Defaultn constructor for Form called" << std::endl;
}

Form::Form(std::string name, int grade_ts, int grade_te) : _name(name), _gradeToSign(grade_ts), _gradeToExecute(grade_te)
{
	std::cout << "Standard constructor for Form called" << std::endl;
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
	int new_grade = this->_grade + n;
	if (new_grade < this->_max_grade)
		throw Form::GradeTooHighException();
	else if (new_grade > this -> _min_grade)
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& instance)
{
    os << "name: " << instance.getName() << ", Sign Grade: " << instance.getSignGrade() << "Grade:" << instance.getExecGrade();
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

void Form::signForm(Bureaucrat &bur)
{
	this->_is_signed = 1;
	std::cout << bur.getName() << " signed " << this->getName();
}

void Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() <= this->getExecGrade())
		this->signForm(bur);
	else
	{
		std::cout << bur.getName() << "couldn’t sign " << this->getName() << "because his grade is not high enough" << std::endl;
	}
		throw Form::GradeTooLowException();
}