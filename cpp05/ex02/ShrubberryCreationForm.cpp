/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:28:34 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/12 18:33:23 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm() : AForm("ShrubberryCreationForm", 145, 137), _target("default target")
{
}

ShrubberryCreationForm::ShrubberryCreationForm(std::string const &target) : AForm("ShrubberryCreationForm", 145, 137), _target(target)
{
}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const &other) : AForm(other), _target(other._target)
{
}

ShrubberryCreationForm &ShrubberryCreationForm::operator=(ShrubberryCreationForm const &other) {
	AForm::operator=(other);
	if (this != &other)
		this->_target = other._target;
	return *this;
}

ShrubberryCreationForm::~ShrubberryCreationForm() {
}

std::string const &ShrubberryCreationForm::getTarget() const {
	return _target;
}

void ShrubberryCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
		throw::AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	
	std::ofstream ofs((_target + "_shrubberry").c_str());

	if (!ofs) {
		throw std::runtime_error("Failed to open file.");
	}
	
	ofs << "       ###\n";
	ofs << "      #o###\n";
	ofs << "    #####o###\n";
	ofs << "   #o#\\#|#/###\n";
	ofs << "    ###\\|/#o#\n";
	ofs << "     # }|{  #\n";
	ofs << "       }|{\n";
	
	ofs.close();
	std::cout << "Shrubberry Creation Form executed by " << executor.getName() << std::endl;
}