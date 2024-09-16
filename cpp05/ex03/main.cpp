/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:29:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/16 11:02:30 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat chief("Chief", 1);
		Bureaucrat middleManager("Middle Manager", 45);
		Bureaucrat internBureaucrat("Intern Bureaucrat", 150);

		Intern intern;

		std::cout << "\n--- SHRUBBERY CREATION FORM ---" << std::endl;

		AForm *shrubberyForm = intern.makeForm("shrubbery creation", "Home");
		if (shrubberyForm)
		{
			std::cout << *shrubberyForm << std::endl;
			internBureaucrat.signForm(*shrubberyForm); // fail
			chief.signForm(*shrubberyForm);			   // success
			chief.executeForm(*shrubberyForm);		   // success
			delete shrubberyForm;
		}

		std::cout << "\n--- ROBOTOMY REQUEST FORM ---" << std::endl;
		
		AForm *robotomyForm = intern.makeForm("robotomy request", "Bender");
		if (robotomyForm)
		{
			std::cout << *robotomyForm << std::endl;
			middleManager.signForm(*robotomyForm);	  // success
			middleManager.executeForm(*robotomyForm); // success (50%)
			delete robotomyForm;
		}

		std::cout << "\n--- PRESIDENTIAL PARDON FORM ---" << std::endl;

		AForm *pardonForm = intern.makeForm("presidential pardon", "Arthur Dent");
		if (pardonForm)
		{
			std::cout << *pardonForm << std::endl;
			internBureaucrat.signForm(*pardonForm); // fail
			chief.signForm(*pardonForm);			// success
			chief.executeForm(*pardonForm);			// success
			delete pardonForm;
		}

		std::cout << "\n--- EXCEPTION TEST ---" << std::endl;
		
		try
		{
			AForm *unknownForm = intern.makeForm("unknown form", "Target");
			delete unknownForm;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}