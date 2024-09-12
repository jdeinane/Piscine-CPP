/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 23:08:01 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/12 16:15:01 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	const std::string _name;
	int _grade;
	void checkGrade(int grade);

public:
	Bureaucrat();
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);
	~Bureaucrat();

	const std::string& getName() const;
	int 				getGrade() const;
	void 				incrementGrade();
	void 				decrementGrade();
	
	void				signForm(Form &form);

	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif