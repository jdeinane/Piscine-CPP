/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:19:06 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/12 18:19:56 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberryCreationForm : public AForm {
	std::string _target;
	
	public:
	ShrubberryCreationForm();
	ShrubberryCreationForm(std::string const &target);
	ShrubberryCreationForm(ShrubberryCreationForm const &other);
	ShrubberryCreationForm &operator=(ShrubberryCreationForm const &other);
	virtual ~ShrubberryCreationForm();

	std::string const &getTarget() const;
	
	virtual void execute(Bureaucrat const &executor) const;
};

#endif