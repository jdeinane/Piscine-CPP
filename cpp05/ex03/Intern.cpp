/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:58:51 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/16 10:57:52 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	
}

Intern::Intern(Intern const &other) {
	*this = other;
}

Intern &Intern::operator=(Intern const &other) {
	(void)other;
	return *this;
}

Intern::~Intern() {
	
}

const char *Intern::UnknownFormException::what() const throw() {
	return "Error: Unknown form requested.";
}

AForm* createShrubberyForm(std::string const &target) {
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomyForm(std::string const &target) {
	return new RobotomyRequestForm(target);
}

AForm* createPardonForm(std::string const &target) {
	return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string const &formName, std::string const &target) const {
	std::string const formNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*formCreators[])(const std::string&) = {createShrubberyForm, createRobotomyForm, createPardonForm};

	for (int i = 0; i < 3; ++i) {
		if (formName == formNames[i]) {
			std::cout << "Intern creates " << formNames[i] << " form targeting " << target << std::endl;
			return formCreators[i](target);
		}
	}
	
	throw Intern::UnknownFormException();
}