#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <ostream>
// # include <stdexcept>

class Bureaucrat
{

private:
	std::string const	_name;
	int					_grade;
	Bureaucrat(void);
public:
	//Coplien
	Bureaucrat(std::string, int);		
	Bureaucrat(Bureaucrat const &ojb);
	Bureaucrat& operator=(Bureaucrat const &obj);
	~Bureaucrat(void);

	//Getter
	std::string const &	getName(void)const;
	int 				getGrade(void)const;

	//Setter
	void				setGrade(int grade);

	//function
	void				upGrade(int);
	void				downGrade(int);

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const &o);
			virtual ~GradeTooHighException(void);
			GradeTooHighException& operator=(GradeTooHighException const &o);			
	};

};

std::ostream&	operator<<(std::ostream &, Bureaucrat const &);

#endif