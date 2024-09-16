/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:29:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/16 10:59:15 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat chief("Chief", 1);
		Bureaucrat intern("Intern", 150);
		Bureaucrat middleManager("Middle Manager", 72);

		ShrubberyCreationForm shrubberyForm("Home");
		RobotomyRequestForm robotomyForm("Bender");
		PresidentialPardonForm pardonForm("Arthur Dent");

		std::cout << "\n--- SHRUBBERY CREATION FORM ---" << std::endl;
		intern.signForm(shrubberyForm);
		chief.signForm(shrubberyForm);
		chief.executeForm(shrubberyForm);

		std::cout << "\n--- ROBOTOMY REQUEST FORM ---" << std::endl;
		middleManager.signForm(robotomyForm);
		chief.executeForm(robotomyForm);

		std::cout << "\n--- PRESIDENTIAL PARDON FORM ---" << std::endl;
		intern.signForm(pardonForm);
		chief.signForm(pardonForm);
		chief.executeForm(pardonForm);

		std::cout << "\n--- EXCEPTINS TEST ---" << std::endl;
		try
		{
			Bureaucrat tooHigh("Too High", 0);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Bureaucrat tooLow("Too Low", 151);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "An unexpected exception occurred: " << e.what() << std::endl;
	}

	return 0;
}
