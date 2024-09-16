/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:29:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/16 09:52:21 by jubaldo          ###   ########.fr       */
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
		// Création des bureaucrates avec différents grades
		Bureaucrat chief("Chief", 1);					// Très haut grade
		Bureaucrat intern("Intern", 150);				// Très bas grade
		Bureaucrat middleManager("Middle Manager", 72); // Grade intermédiaire

		// Création des formulaires
		ShrubberyCreationForm shrubberyForm("Home");
		RobotomyRequestForm robotomyForm("Bender");
		PresidentialPardonForm pardonForm("Arthur Dent");

		// Tentative de signature et d'exécution par différents bureaucrates
		std::cout << "\n--- TEST DE SHRUBBERY CREATION FORM ---" << std::endl;
		intern.signForm(shrubberyForm);	  // Échec de la signature car le grade est trop bas
		chief.signForm(shrubberyForm);	  // Succès de la signature
		chief.executeForm(shrubberyForm); // Exécution réussie par un grade élevé

		std::cout << "\n--- TEST DE ROBOTOMY REQUEST FORM ---" << std::endl;
		middleManager.signForm(robotomyForm);	 // Succès de la signature
		chief.executeForm(robotomyForm); // Succès ou échec aléatoire de la robotomisation

		std::cout << "\n--- TEST DE PRESIDENTIAL PARDON FORM ---" << std::endl;
		intern.signForm(pardonForm);   // Échec de la signature car grade trop bas
		chief.signForm(pardonForm);	   // Succès de la signature
		chief.executeForm(pardonForm); // Succès de l'exécution du pardon

		// Test avec des grades hors limites
		std::cout << "\n--- TEST DES EXCEPTIONS DE GRADES HORS LIMITES ---" << std::endl;
		try
		{
			Bureaucrat tooHigh("Too High", 0); // Devrait lever une exception
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		try
		{
			Bureaucrat tooLow("Too Low", 151); // Devrait lever une exception
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
