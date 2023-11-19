/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:59:49 by aaslan            #+#    #+#             */
/*   Updated: 2023/11/19 15:03:46 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Orthodox Canonical Form
Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->grade = other.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
}

// Project Requirements
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

const std::string Bureaucrat::getName(void) const
{
	return name;
}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

// Custom Exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

// output stream override
std::ostream &operator<<(std::ostream &output, const Bureaucrat &bureaucrat)
{
	output << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return output;
}
