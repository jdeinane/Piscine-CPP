/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:29:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/12 16:36:36 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		// Création de bureaucrates
		Bureaucrat chief("Chief", 2);
		Bureaucrat intern("Intern", 149);

		// Affichage des informations des bureaucrates
		std::cout << chief << std::endl;
		std::cout << intern << std::endl;

		// Création de formulaires
		Form taxForm("Tax Form", 5, 3);
		Form nda("NDA Agreement", 150, 140);

		// Affichage des informations des formulaires
		std::cout << taxForm << std::endl;
		std::cout << nda << std::endl;

		// Tests de signature
		intern.signForm(taxForm);
		chief.signForm(taxForm);

		std::cout << taxForm << std::endl; // Verifier si le formulaire est signé

		// Tests avec des grades hors limites
		Bureaucrat tooHigh("Too High", 0); // Devrait lancer une exception
		Bureaucrat tooLow("Too Low", 151); // Devrait lancer une exception
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "An unexpected exception has occurred: " << e.what() << std::endl;
	}

	return 0;
}