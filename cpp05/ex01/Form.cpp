/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:50:41 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/12 16:22:45 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _issigned(false), _gradeSign(150), _gradeExec(150) {
}

Form::Form(std::string const name, int const gradeSign, int const gradeExec) : _name(name), _issigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
	
}

Form::Form(Form const &other) : _name(other._name), _issigned(other._issigned), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec) {
	
}

Form &Form::operator=(Form const &other) {
	_issigned = other._issigned;
	return *this;
}

Form::~Form() {
}

std::string Form::getName() const {
	return _name;
}

int Form::getGradeExec() const {
	return _gradeExec;
}

int Form::getGradeSign() const {
	return _gradeSign;
}

bool Form::getSigned() const {
	return _issigned;
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
	if (bureaucrat.getGrade() <= _gradeSign)
		_issigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name: " << form.getName() << "; " << " Is signed: " << form.getSigned() << "; " << " Sign Grade: " << form.getGradeSign() << "; " << " Execute Grade: " << form.getGradeExec() << std::endl;
	return os;
}
