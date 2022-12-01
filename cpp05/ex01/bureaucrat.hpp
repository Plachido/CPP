#ifndef BUREAUCRAT
# define BUREAUCRAT

#include <iostream>
#include "form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
		static const int _max_grade = 1;
		static const int _min_grade = 150;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &other);
		const std::string &getName() const;
		int getGrade() const;
		void incrementGrade(int n);
		void decrementGrade(int n);
		void checkGrade(int n);
		void signForm(Form &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<( std::ostream &os, const Bureaucrat &instance );

#endif