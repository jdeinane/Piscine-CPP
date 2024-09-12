/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:29:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/12 16:23:51 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		// Create a Bureaucrat with a valid grade
		Bureaucrat bureaucrat("Bob", 75);
		std::cout << bureaucrat << std::endl;

		// Create a Form with a valid grade requirement
		Form form("Application", 50, 70);
		std::cout << form << std::endl;

		// Sign the form
		bureaucrat.signForm(form);

		// Try to sign the form again (should be already signed)
		bureaucrat.signForm(form);

		// Create a Bureaucrat with an invalid grade (too high)
		Bureaucrat bureaucrat2("Alice", 0);

		// Create a Form with an invalid grade requirement (too low)
		Form form2("Useless Paper", 151, 151);

		// Try to sign the form with the invalid bureaucrat
		bureaucrat2.signForm(form);

		// Try to sign the form with the invalid grade requirement
		bureaucrat.signForm(form2);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}