#include "Bureaucrat.hpp"

//Coplein

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):
_name(name),
_grade(grade)
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref):
_name(ref.getName()),
_grade(ref.getGrade())
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const &obj)
{
	if (this != &obj)
	{
		this->setGrade(obj.getGrade());
	}
	return *this;
}

// Getter

std::string const& Bureaucrat::getName(void) const
{
	return this->_name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

// Setter

void				Bureaucrat::setGrade(int grade)
{
	if (grade >= 1 && grade <= 150)
		this->_grade = grade;
}

// Function

void				Bureaucrat::upGrade(int i)
{
	this->setGrade(this->getGrade() - i);

}

void				Bureaucrat::downGrade(int i)
{
	this->setGrade(this->getGrade() + i);
}

// output

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &obj)
{
	o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return o;
}