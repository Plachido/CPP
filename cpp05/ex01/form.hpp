# ifndef FORM_HPP
# define FORM_HPP

#include "bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _is_signed;
        const int _gradeToSign;
        const int  _gradeToExecute;
        int _grade;
		static const int _max_grade = 1;
		static const int _min_grade = 150;


    public:
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
    Form();
    const std::string &getName() const;
    void checkGrade(int n);
    int getSignGrade() const;
    int getExecGrade() const;
    Form(std::string name, int grade_ts, int grade_te);
    void beSigned(Bureaucrat &bur);
    void signForm(Bureaucrat &bur);
};

std::ostream	&operator<<( std::ostream &os, const Form &instance );

#endif